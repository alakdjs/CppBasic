#include <iostream>
#include <string>

using namespace std;

// DataType�� �Ϲ�ȭ�� ���α׷��� ȯ���� ����. (�Ϲ�ȭ ���α׷���, generic programming)
// C++������ Template���� ����.

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

	Complex operator+(Complex& right) {
		return Complex(_real + right._real, _imaginary + right._imaginary);
	}

	bool operator > (Complex& right) {
		if (_real > right._real) {
			return true;
		}
		else {
			return false;
		}
	}

};

ostream& operator<<(ostream& o, Complex& ref) {
	o << ref.GetReal() << showpos << ref.GetImaginary() << "i";
	o << noshowpos;

	return o;
}

// ���ø� �Լ�  (T���� ġȯ�Ǵ� �Լ��� Ʋ�� ����)
template <typename T>
T add(T a, T b) {
	cout << "T add(T a, T b)" << endl;
	return a + b;
}

template <typename T, typename T2>
T2 add(T a, T2 b) {
	cout << "T2 add(T a, T2 b)" << endl;
	return a + b;
}

template <typename T>
T Max(T& a, T& b) {
	T temp = a > b ? a : b;

	return temp;
}

/*
int add(int a, int b) {
   return a + b;
}

float add(float a, float b) {
   return a + b;
}

double add(double a, double b) {
   return a + b;
}

string add(string a, string b) {
   return a + b;
}
*/

int main() {
	int a = 20;
	int b = 30;

	float c = 1.3f;
	float d = 10.4f;

	double e = 30.33;
	double f = 22.456;

	string str1 = "monster";
	string str2 = " is World!!";

	cout << a << " + " << b << " = " << add(a, b) << endl;
	cout << c << " + " << d << " = " << add(c, d) << endl;
	cout << e << " + " << f << " = " << add(e, f) << endl;
	cout << str1 << " + " << str2 << " = " << add(str1, str2) << endl;

	cout << a << " + " << c << " = " << add(a, c) << endl;


	Complex ca(10, 10);
	Complex cb(20, 30);
	Complex cc(0, 0);


	// ���� 1.
	// Complex Ÿ���� add �Լ��� �۵��� �� �ֵ��� Complex Ŭ������ �ϼ��ϼ���.
	cc = add(ca, cb);

	cout << ca << " + " << cb << " = " << cc << endl;


	// ���� 2.
	// �ΰ��� ���ؼ� ū���� �����ϴ� ���ø��Լ� Max�� ����ð� 
	// �Ʒ��� �ڵ尡 �۵��ϵ��� �ϼ���..
	cout << a << "�� " << b << "�߿� ū���� " << Max(a, b) << endl;
	cout << c << "�� " << d << "�߿� ū���� " << Max(c, d) << endl;
	cout << e << "�� " << f << "�߿� ū���� " << Max(e, f) << endl;


	// extra.
	cc = Max(ca, cb);

	cout << "ū���� " << cc << endl;


	return 0;
}