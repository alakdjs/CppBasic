#include <iostream>

using namespace std;

int main() {
	int value = 0;

	value = 100 + 200;

	// �ӽ������� ��������� �������� ���� ��Ƴ��� �뵵�� ���.
	int&& rrefa = 100; // ������ ����
	int&& rrefb = 200; // ������ ����

	cout << "refa = " << rrefa << endl;
	cout << "refb = " << rrefb << endl;

	rrefa = 400;
	cout << endl;
	cout << "refa = " << rrefa << endl;
	cout << "refb = " << rrefb << endl;

	int a = 100;

	int& refaa = a;

	rrefa = 200;

	
	return 0;
}