#include <iostream>

/*
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

    ~DynamicArray() {
        cout << "~DynamicArray() �Ҹ���" << endl;
        delete[] _parr;   // �����迭 �ݳ�ó��.
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

    DynamicArray array2(array);




    return 0;
}

*/