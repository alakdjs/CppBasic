#include <iostream>

using namespace std;

// ����ȯ ������ �����ε�

class A {
private:
	int _value;
	int _value2;

public:
	A(int value, int value2)
		: _value(value), _value2(value) {}

	void Info() {
		cout << "_value = " << _value << endl;
		cout << "_value2 = " << _value2 << endl;
	}
};

class Complex {
private:
	int _real;
	int _imaginary;

public:
	Complex(int real, int imaginary) 
		: _real(real), _imaginary(imaginary) {}

	// explcit�� ������ �տ� ���� �� �����ڰ�����
    // ���������� ����ȯ���� ����� �ǹ��Դϴ�.
	explicit Complex(int real) 
		: _real(real), _imaginary(0) {}

	Complex(float real) {
		_real = (int)real;
		_imaginary = 0;
	}

	// int�� ����ȯ ������
	operator int() {
		return _real;
	}

	// float�� ����ȯ ������
	operator float() {
		return (float)_real;
	}

	// A DataType ����ȯ ������
	operator A() {
		return A(_real, _imaginary);
	}

	int GetReal() {
		return _real;
	}

	int GetImaginary() {
		return _imaginary;
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
	Complex c(0, 0);

	// a = 1; // ������ ����ȯ
	a = Complex(1); // ����� ����ȯ

	cout << "a = " << a << endl;

	a = 3.23f;

	a = Complex(3.23f);

	cout << "a = " << a << endl;

	int e = 0;

	e = a;

	e = (int)a;

	float h = 0.0f;

	h = (float)a;

	A g(0, 0);

	g = (A)a;

	g.Info();


	return 0;
}