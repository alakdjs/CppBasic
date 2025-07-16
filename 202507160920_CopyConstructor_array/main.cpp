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
        cout << "DynamicArray(int size) 생성자" << endl;
        _parr = new int[_size]; // 동적배열 생성
    }

    ~DynamicArray() {
        cout << "~DynamicArray() 소멸자" << endl;
        delete[] _parr;   // 동적배열 반납처리.
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