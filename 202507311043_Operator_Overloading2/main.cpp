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
		cout << "���ڸ� �޴� ������" << endl;
		_parr = new int[_size];
		cout << "_parr = " << _parr << endl;
	}

	// ���� ���縦 �ؾ� �ϴ� ��쿡��
    // �⺻������ �����Ǿ����� = (���Կ�����)�� ����ϸ� ������ �߻��� �� �ֽ��ϴ�.
    // ���� ������ �����ε��� �ؾ� �մϴ�.
	DynamicArray& operator=(DynamicArray& right) {
		// ������ �����迭�� �ݳ�ó��
		delete[] _parr;

		_size = right._size;

		// �����迭�� �ٽ� ����
		_parr = new int[_size];	// ���ڷ� ���� right�� ������ size�� �����޸� ������ ����

		// right�� �����迭�� �ִ� ���� ����
		for (int i = 0; i < _size; i++) {
			_parr[i] = right._parr[i];
		}

		return *this;
	}

	// �迭 ÷�� �����ڸ� ������ �����ε�
	int& operator[](int index) {
		return _parr[index];
	}

	~DynamicArray() {
		delete[] _parr;
	}

	int GetSize() {
		return _size;
	}
};

int main() {
	DynamicArray array(20);
	DynamicArray array2(10);
	DynamicArray array3(30);

	for (int i = 0; i < array2.GetSize(); i++) {
		array2[i] = i;
		// array.operator[](i) = i;
	}

	array = array2;

	cout << endl;
	for (int i = 0; i < array.GetSize(); i++) {
		cout << "array[" << i << "] = " << array[i] << endl;
	}

	cout << endl;
	for (int i = 0; i < array2.GetSize(); i++) {
		cout << "array[" << i << "] = " << array2[i] << endl;
	}

	// array3 = array = array2;


	return 0;
}