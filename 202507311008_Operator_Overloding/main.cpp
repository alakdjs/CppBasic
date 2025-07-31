#include <iostream>

using namespace std;

// ���Ҽ� Ŭ����
class Complex {
private:
	int _real;
	int _imaginary;

public:
	Complex(int real, int imaginary)
		: _real(real), _imaginary(imaginary) {}

	int GetReal() {
		return _real;
	}

	int GetImaginary() {
		return _imaginary;
	}

	// + ��ȣ�� ���� ������ �����ε�
	Complex& operator+(Complex& right) {
		Complex temp(_real + right._real, _imaginary + right._imaginary);

		return temp;
	}

	// ���� ������
	bool operator<(Complex& right) {
		return _real < right._real;
	}

	bool operator>(Complex& right) {
		return _real > right._real;
	}

	bool operator==(Complex& right) {
		return _real == right._real;
	}

	bool operator!=(Complex& right) {
		return _real != right._real;
	}

	void Info() {
		cout << _real << showpos << _imaginary << "i";
		cout << noshowpos;
	}
};

// �⺻ �����ڴ� �⺻ DataType�� ���� ������� �����մϴ�.

// C++ ������ ����ڸ��� Ŭ������ DataType�� �����ȣ�� ����ϴ�
// ����� �����ϰ� �ֽ��ϴ�.
// �̰��� ������ �����ε�(operator overloading)�̶�� �մϴ�.

// �����ڿ����ε��� �Ҷ� �ǰ����
// �⺻ �����ڱ�ȣ�� �νĹ����� ����� ����.
// + ��ȣ�� ������ ���� ó���� ���� ����.

int main() {
	Complex a(10, 10);
	Complex b(12, 12);
	Complex c(0, 0);

	a.Info();
	cout << endl;
	b.Info();
	cout << endl;

	c = a + b;
	// c = a.operator+(b);

	c.Info();
	cout << endl;

	bool ret = a < b;
	// ret = a.operator<(b);
	cout << "a < b = " << ret << endl;

	ret = a == b;
	// ret = a.operator==(b);
	cout << "a == b = " << ret << endl;


	return 0;
}