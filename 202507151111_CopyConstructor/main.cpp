#include <iostream>

using namespace std;
// �⺻������ (���ڸ� ���� �ʴ� ������)
// ���ڸ� �޴� ������
// ��������� (�ڽ��� Ÿ���� ���ڷ� �޴� ������
// ���� �����ڴ� ������ ������ �����Ϸ� �ڵ����� ����� �ݴϴ�.

class Complex {
private:
    int _real;
    int _imaginary;

public:
    Complex(int real, int imaginary)
        : _real(real), _imaginary(imaginary)
    {
        cout << "���ڸ� �޴� ������" << endl;
    }

    Complex(Complex& ref)   // ���� ������
        : _real(ref._real), _imaginary(ref._imaginary)
    {
        cout << "���� ������" << endl;
    }

    int GetReal() {
        return _real;
    }

    int GetImaginary() {
        return _imaginary;
    }

    void Info() {
        cout << _real << showpos << _imaginary << "i";
        cout << noshowpos;
    }
};


int main() {
    Complex a(10, -10);
    a.Info();

    cout << endl;
    //Complex b = a;
    Complex b(a); // �ڽ��� Ÿ���� ���ڷ� �޴� �����ڸ� ���� �����ڶ�� �մϴ�.

    b.Info();


    return 0;
}