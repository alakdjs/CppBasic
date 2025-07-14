#include <iostream>
#include <string>
// �����ε� (Overloading)

using namespace std;

// C����� ��쿡�� ������Ʈ�� ���о ������ �̸��� �Լ��� ���� �� �����ϴ�.
// C++������ �� ������Ʈ�ȿ� ������ �̸��� �Լ��� ����� �� �ֽ��ϴ�.
// �̰��� �����ε�(Overloading)�̶�� �մϴ�.
// �Լ� �̸��� ���������� �Ű������� ������ �Ű������� DataType�� �޶�� �մϴ�.
// return Type�� �Լ��� ���Ե��� �ʽ��ϴ�.

// C++�� �Լ��� �̸��� ���̹��Ҷ� ���Ӹͱ۸��̶�� ����� ����մϴ�.
// ���������� ����� �Լ��� �̸��� �Ű������� DataType�̳� �Ű������� ������ ���Խ�Ű�� ����Դϴ�.

float add(float a, float b) { // addYY
	return a + b;
}

int add(int a, int b) { // addXX
	return a + b;
}

float add(float a, int b) { // addYX
	return a + (float)b;
}

double add(double a, double b) { // addZZ
	return a + b;
}

string add(string a, string b) { // addSS
	return a + b;
}

int add(int a, int b, int c) { // addXXX
	return a + b + c;
}


int main() {
	int a = 20;
	int b = 30;
	int iret = 0;

	float c = 2.4f;
	float d = 3.4f;
	float fret = 0.0f;

	double e = 10.3;
	double f = 23.4;
	double dret = 0.0;

	string g = "Monster";
	string h = "is World";
	string sret = "";

	iret = add(a, b);  // call addXX

	//call _add;

	cout << a << " + " << b << " = " << iret << endl;

	dret = add(e, f); // call addZZ

	cout << e << " + " << f << " = " << dret << endl;

	sret = add(g, h); // call addSS
	cout << g << " + " << h << " = " << sret << endl;

	return 0;
}