#include <iostream>

using namespace std;

class DynamicArray {
private:
	int* _parr;
	int _size;

public:
	DynamicArray(int size)
		: _size(size)
	{
		cout << "DynamicArray(int size) ������" << endl;
		_parr = new int[_size]; // �����迭 ����
	}

	// ���� copy (shallow copy)�� ��쿡�� ��������� ���� �ʿ䰡 �����ϴ�. 
	// �����Ϸ��� �ڵ����� ������ִ� ���� �����ڸ� ����ϸ� �˴ϴ�.

    // ���� copy (deep copy)�� ��쿡�� ��������ڸ� ���� ������ �մϴ�.   
	DynamicArray(DynamicArray& ref) // ���������
		: _size(ref._size)
	{
		cout << "���������" << endl;
		_parr = new int[_size];

		for (int i = 0; i < _size; i++)
		{
			// ���ڷ� ���� ��ü�� �����迭�� ���� ������.
			_parr[i] = ref._parr[i];
		}
	}

	~DynamicArray() {
		cout << "~DynamicArray() �Ҹ���" << endl;
		delete[] _parr; // �����迭 �ݳ�ó��
	}

	void SetIndex(int index, int value) {
		_parr[index] = value;
	}

	int GetIndex(int index) {
		return _parr[index];
	}

	int GetSize() {
		return _size;
	}
};


int main() {

	DynamicArray array(10);

	for (int i = 0; i < array.GetSize(); i++) {
		array.SetIndex(i, i);
	}

	for (int i = 0; i < array.GetSize(); i++) {
		cout << "array[" << i << "] = " << array.GetIndex(i) << endl;
	}

	cout << "array2" << endl;

	DynamicArray array2(array);

	for (int i = array2.GetSize() - 1; i >= 0; i--) {
		array2.SetIndex(i, array2.GetSize() - i);
	}

	cout << "array ��ü�� �����迭 �� ���" << endl;

	for (int i = 0; i < array.GetSize(); i++) {
		cout << "array[" << i << "] = " << array.GetIndex(i) << endl;
	}

	cout << endl;
	cout << "array2 ��ü�� �����迭 �� ���" << endl;

	for (int i = 0; i < array2.GetSize(); i++) {
		cout << "array2[" << i << "] = " << array2.GetIndex(i) << endl;
	}


	return 0;
}