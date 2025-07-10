#include <iostream>

using namespace std;

// ������ �������
// ����� �������

int main() {
	// ����� ����
	100; // ���(constant)
	200;

	int sum;

	sum = 100;
	sum = 200;

	// ������ ������� �絵�� �� ���� �ֽ��ϴ�.
    // ������ ����� ���� �������� ���ϵ��� �� ���� �ֽ��ϴ�.
    // ������ ���鶧 ������ ���Ǿտ� const Ű���带 ����ϸ� ������ ����� ��� �˴ϴ�.
    // ����� ������ ������ ����� ���ÿ� �ʱ�ȭ�� �Ǿ�� �մϴ�.
	const int MAX = 400;

	//MAX = 400; // ����� �������� �����ϰ� �ִ� ���� ������ �� �����ϴ�. 

	// ����������
	int a = 1000;
	int b = 2000;

	// ������ ������ ���鶧 ����� ���ÿ� �ʱ�ȭ�� �ؾ� �մϴ�.
    // a������ ��Ī�� refa�� �������.
	int& refa = a; // a������ �����ϴ� refa ������ ����

	refa = 4000;

	cout << "a = " << a << endl;
	cout << "refa = " << refa << endl;

	cout << "&a = " << &a << endl;
	cout << "&refa = " << &refa << endl;


	// ������ ����
	int* pa;

	pa = &a;

	cout << "before a = " << a << endl;
	cout << "before *pa = " << *pa << endl;

	*pa = 60000;

	cout << endl;
	cout << "after a = " << a << endl;
	cout << "before *pa = " << *pa << endl;

	
	pa = &b;

	cout << "before a = " << a << endl;
	cout << "before *pa = " << *pa << endl;
	cout << "before b = " << b << endl;

	*pa = 23456;

	cout << "after a = " << a << endl;
	cout << "after *pa = " << *pa << endl;
	cout << "after b = " << b << endl;

	// ������������ �������������� �������� �۵������ �����մϴ�.
    // ������������ �ʱⰪ���� ���޵� ������ �ּҰ��� ������ �� �����ϴ�.
    // ������������ �����ɶ� ���޵� ������ �޸𸮰����� ����Ű�� �˴ϴ�.

	return 0;
}