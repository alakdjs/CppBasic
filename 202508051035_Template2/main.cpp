#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

struct Student {
    string name;
    int age;
    int grade;
};

// 템플릿 클래스
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
};


int main() {
    srand(time(NULL)); // 랜덤 씨드값 생성
    DynamicArray<int> array(10);

    for (int i = 0; i < array.GetSize(); i++) {
        cout << "array[ " << i << "] = " << array[i] << endl;
    }

    for (int i = 0; i < array.GetSize(); i++) {
        cout << "array[ " << i  << "] = " << array[i] << endl;
    }

    DynamicArray<float> floatArray(10);

    for (int i = 0; floatArray.GetSize(); i++) {
        floatArray[i] = i * 1.3f;
    }

    for (int i = 0; i < floatArray.GetSize(); i++) {
        cout << "floatArray[" << i << "] = " << floatArray[i] << endl;
    }

    DynamicArray<Student> stArray(10);

    char buff[100];

    for (int i = 0; i < stArray.GetSize(); i++) {
        sprintf(buff, "monster_%d", i);
        stArray[i].age = rand() % 10 + 5;
        stArray[i].grade = rand() % 3 + 1;
        stArray[i].name = buff;
    }


    return 0;
}




/*
// 예전 환경
#include <iostream>

using namespace std;

class DynamicArray {
private:
    int _size;
    int* _parr;

public:
    DynamicArray(int size)
        : _size(size) {
        _parr = new int[_size];
    }

    ~DynamicArray() {
        delete[] _parr;
    }

    int GetSize() {
        return _size;
    }

    int& operator[](int index) {
        return _parr[index];
    }
};

class FloatDynamicArray {
private:
    int _size;
    float* _parr;

public:
    FloatDynamicArray(int size)
        : _size(size) {
        _parr = new float[_size];
    }

    ~FloatDynamicArray() {
        delete[] _parr;
    }

    int GetSize() {
        return _size;
    }

    float& operator[](int index) {
        return _parr[index];
    }
};


int main() {
    DynamicArray array(10);

    for (int i = 0; i < array.GetSize(); i++) {
        array[i] = i;
    }

    for (int i = 0; i < array.GetSize(); i++) {
        cout << "array[" << i << "] = " << array[i] << endl;
    }


    FloatDynamicArray floatArray(10);

    for (int i = 0; i < floatArray.GetSize(); i++) {
        floatArray[i] = i * 1.3f;
    }

    for (int i = 0; i < floatArray.GetSize(); i++) {
        cout << "floatArray[" << i << "] = " << floatArray[i] << endl;
    }


    return 0;
}
*/