#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Item {
private:
	int _no;
	string _name;
	int _count;

public:
	Item(int no, string name, int count)
		: _no(no), _name(name), _count(count) {}

	int GetCount() {
		return _count;
	}

	int GetNo() {
		return _no;
	}

	string GetName() {
		return _name;
	}
};

struct Student {
	string name;
	int age;
	int grade;
};


template <typename T> 
class Sort {
public:
	virtual bool CompareValue(T left, T right) = 0;
	virtual bool operator()(T left, T right) = 0;
};

template <typename T>
class Acending : public Sort<T> {
public:
	bool CompareValue(T left, T right) override {
		if (left > right) {
			return true;
		}
		else {
			return false;
		}
	}

	bool operator()(T left, T right) {
		return left < right;
	}
};

template <>
class Acending<Item*> : public Sort<Item*> {
public:
	bool CompareValue(Item* pLeft, Item* pRight) override {
		if (pLeft->GetCount() > pRight->GetCount()) {
			return true;
		}
		else {
			return false;
		}
	}

	bool operator()(Item* pLeft, Item* pRight) {
		return pLeft->GetCount() < pRight->GetCount();
	}
};


template <typename T>
class Decending : public Sort<T> {
public:
	bool CompareValue(T left, T right) override {
		if (left < right) {
			return true;
		}
		else {
			return false;
		}
	}

	bool operator()(T left, T right) {
		return left > right;
	}
};

template <>
class Decending<Item*> : public Sort<Item*> {
public:
	bool CompareValue(Item* pLeft, Item* pRight) override {
		if (pLeft->GetCount() < pRight->GetCount()) {
			return true;
		}
		else {
			return false;
		}
	}

	bool operator()(Item* pLeft, Item* pRight) {
		return pLeft->GetCount() < pRight->GetCount();
	}
};


// ���ø� Ŭ����
template <typename T>
class DynamicArray {
private:
	int _size;
	T* _parr;

public:
	DynamicArray(int size)
		: _size(size) {
		_parr = new T[_size];
	}

	~DynamicArray() {
		delete[] _parr;
	}

	int GetSize() {
		return _size;
	}

	T& operator[](int index) {
		return _parr[index];
	}

	void Sort(Sort<T>& ref) {
		for (int i = 0; i < _size - 1; i++) {
			for (int j = 0; j < _size - (i + 1); j++) {
				if (ref.CompareValue(_parr[j], _parr[j + 1])) {
					T temp = _parr[j];
					_parr[j] = _parr[j + 1];
					_parr[j + 1] = temp;
				}
			}
		}
	}
};

// ���ø� Ŭ����
template <>
class DynamicArray<Item*> {
private:
	int _size;
	Item** _parr;

public:
	DynamicArray(int size)
		: _size(size) {
		_parr = new Item*[_size];
	}

	~DynamicArray() {
		cout << "DynamicArray Item �Ҹ���" << endl;
		for (int i = 0; i < _size; i++) {
			delete _parr[i];
		}
		delete[] _parr;
	}

	int GetSize() {
		return _size;
	}

	Item*& operator[](int index) {
		return _parr[index];
	}

	void Sort(Sort<Item*>& ref) {
		for (int i = 0; i < _size - 1; i++) {
			for (int j = 0; j < _size - (i + 1); j++) {
				if (ref.CompareValue(_parr[j], _parr[j + 1])) {
					Item* temp = _parr[j];
					_parr[j] = _parr[j + 1];
					_parr[j + 1] = temp;
				}
			}
		}
	}
};

template <typename T>
ostream& operator<<(ostream& o, DynamicArray<T>& ref) {
	for (int i = 0; i < ref.GetSize(); i++) {
		o << ref[i] << " ";
	}

	return o;
}

// Student Ÿ���� ����Ͽ��� operator<< �Լ��� ����� ������...
// ���ø� Ư��ȭ
template <>
ostream& operator<<(ostream& o, DynamicArray<Student>& ref) {
	for (int i = 0; i < ref.GetSize(); i++) {
		o << "����: " << ref[i].age << ", �г�: " << ref[i].grade << ", �̸�: " << ref[i].name << endl;
	}

	return o;
}

template<>
ostream& operator<<(ostream& o, DynamicArray<Item*>& ref) {
	for (int i = 0; i < ref.GetSize(); i++) {
		o << "�����۹�ȣ: " << ref[i]->GetNo() << ", �������̸�: "
			<< ref[i]->GetName() << ", �����۰���: " << ref[i]->GetCount() << endl;
	}

	return o;
}


int main() {
	srand(time(NULL)); //���� ���尪 ����
	DynamicArray<int> array(10);

	for (int i = 0; i < array.GetSize(); i++) {
		array[i] = rand() % 100;
	}

	cout << "���� �� " << endl;
	cout << array << endl;

	cout << "���� ��: " << endl;
	Acending<int> aSort;
	array.Sort(aSort);
	cout << "��������: " << array << endl;

	Decending<int> dSort;
	array.Sort(dSort);
	cout << "��������: " << array << endl;


	DynamicArray<Item*> arrayItem(30);

	char buff[30];
	for (int i = 0; i < arrayItem.GetSize(); i++) {
		sprintf(buff, "Item_%d", i);
		arrayItem[i] = new Item(i, buff, rand() % 100);
	}

	// DynamicArray<Item*>�� count�� �������� ������������ �����ϰ� cout ��ü�� ����غ�����..
	Acending<Item*> aItemSort;
	Decending<Item*> dItemSort;

	cout << "��������" << endl;
	arrayItem.Sort(aItemSort);

	cout << arrayItem << endl;

	cout << endl;
	cout << "��������" << endl;

	arrayItem.Sort(dItemSort);

	cout << arrayItem << endl;


	return 0;

}