#include <iostream>

using namespace std;

class Complex {
private:
	int _real;
	int _imaginary;

public:
	Complex(int real, int imaginary)
		: _real(real), _imaginary(imaginary) {
	}

	int GetReal() {
		return _real;
	}

	int GetImaginary() {
		return _imaginary;
	}

	// ���������� �����ε�
	// ��ġ��
	Complex& operator++(int) {
		Complex temp(*this);

		_real++;
		_imaginary++;

		return temp;
	}

	// ��ġ��
	Complex& operator++() {
		_real++;
		_imaginary++;

		return *this;
	}

	friend ostream& operator<<(ostream& o, Complex& ref);

};

ostream& operator<<(ostream& o, Complex& ref)
{
	o << ref._real << showpos << ref._imaginary << "i";
	o << noshowpos;

	return o;
}

int main() {
	Complex a(10, 10);
	Complex b(0, 0);

	int c = 0;
	int d = 20;

	++d;	// ��ġ��
	d++;	// ��ġ��

	c = ++d;
	// d = d + 1;
    // c = d;

	c = d++;
	// c = d;
	// d = d + 1;

	++a;
	cout << "a = " << a << endl;

	a++;
	cout << "a = " << a << endl;

	cout << endl;
	cout << "��ġ�� ����" << endl;
	b = ++a;
	cout << "b = " << b << endl;
	cout << "a = " << a << endl;
	cout << endl;

	cout << "��ġ�� ����" << endl;
	b = a++;
	cout << "b = " << b << endl;
	cout << "a = " << a << endl;


	return 0;
}