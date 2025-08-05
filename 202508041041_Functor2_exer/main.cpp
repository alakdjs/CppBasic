#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

// C++���� ����ü Ÿ���� Ŭ������ ������ �˴ϴ�.
// default�� public �Դϴ�.
struct Student {
    string _name;
    int _grade;
    int _classNum;

    Student() {}
    Student(string name, int grade, int classNum)
        : _name(name), _grade(grade), _classNum(classNum) {
    }
};

class Sort {
public:
    virtual bool operator()(Student& left, Student& right) = 0;
};

class GradeAscending : public Sort {
public:
    bool operator()(Student& left, Student& right) {
        if (left._grade > right._grade) {
            return true;
        }
        else {
            return false;
        }
    }
};

class GradeDecending : public Sort {
public:
    bool operator()(Student& left, Student& right) {
        if (left._grade < right._grade) {
            return true;
        }
        else {
            return false;
        }
    }
};

class DynamicArray {
private:
    int _size;
    Student* _parr;

public:
    DynamicArray(int size)
        : _size(size)
    {
        _parr = new Student[_size];
    }

    /* // ���� �����Ѱ�
    DynamicArray(Student* parr, int size)
        : _size(size)
    {
        _parr = new Student[_size];
        for (int i = 0; i < _size; i++) {
            _parr[i] = parr[i];
        }
    }
    */

    ~DynamicArray() {
        delete[] _parr;
    }

    int GetSize() {
        return _size;
    }

    Student& operator[](int index) {
        return _parr[index];
    }

    // ����
    void Sort(Sort& comp) {
        for (int i = 0; i < _size - 1; i++) {
            for (int j = 0; j < _size - (i + 1); j++) {
                //if (comp(_parr[j], _parr[j + 1])) {
                if (comp.operator()(_parr[j], _parr[j + 1])) {

                    Student temp = _parr[j];
                    _parr[j] = _parr[j + 1];
                    _parr[j + 1] = temp;
                }
            }
        }
    }

    friend ostream& operator<<(ostream& o, DynamicArray& ref);
};

ostream& operator<<(ostream& o, DynamicArray& ref) {
    for (int i = 0; i < ref._size; i++) {
        o << "�̸�: " << ref[i]._name << ", �г�: " << ref[i]._grade << ", ��: " << ref[i]._classNum << endl;
    }

    return o;
}


void InputStudent(Student& ref) {
    static int num = 0;
    char buff[30];

    sprintf(buff, "monster_%d", num++);
    ref._name = buff;
    ref._grade = rand() % 6 + 1;
    ref._classNum = rand() % 11 + 1;
}

void PrintStudent(Student& ref) {
    cout << "�̸�: " << ref._name << ", �г�: " << ref._grade << ", ��: " << ref._classNum << endl;
}

int main() {
    srand(time(NULL));  // ���� �ð����� ���� ���尪 ����
    DynamicArray array(30);
    Student starray[30];

    GradeAscending ascend;
    GradeDecending decend;

    int length = sizeof(starray) / sizeof(starray[0]);

    for (int i = 0; i < length; i++) {
        InputStudent(starray[i]);
    }

    for (int i = 0; i < length; i++) {
        PrintStudent(starray[i]);
    }

    // DynamicArray Ŭ������ �����ؼ� Student�迭�� ���� DynamicArray�� 
    // ������ �ϰ� DynamicArray��ü�� �̿��ؼ� grade�� �������� ������ �Ŀ� ���
    // �غ�����...
    // �迭�� �����͸� array ��ü�� �����迭�� ����
    for (int i = 0; i < array.GetSize(); i++) {
        array[i] = starray[i];
    }
    cout << endl;

    cout << "array = " << endl << array << endl;

    cout << "������������ ���" << endl;
    array.Sort(ascend);

    cout << array << endl;

    cout << endl;
    cout << "������������ ���" << endl;
    array.Sort(decend);
    cout << array << endl;


    return 0;
}