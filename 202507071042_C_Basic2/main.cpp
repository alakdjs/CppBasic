#include <iostream>

using namespace std;

int main() {
	// �Ʒ� ������� ������ �� ������ ����Ÿ Ÿ����
	// ��谪�� �Է��Ͻð� ����غ�����..
	// 
	// ������
	short a;
	long b;
	int c;

	unsigned short d;
	unsigned long e;
	unsigned int f;

	// �Ǽ���
	float g;
	double h;

	// ������
	char i;
	unsigned char j;

	a = -32768;
	cout << "a = " << a << endl;

	b = -2147483647 - 1;
	cout << "b = " << b << endl;

	// ��� printf �Լ� ���
	// ���� �������ڿ�
	int ab = 20;
	int cb = 30;
	// %d ��ȣ�ִ� ������ ���
	cout << "ab = " << ab << ", cb = " << cb << endl;
	//printf("ab = %d, cb = %d\n", ab, cb);

	float dd = 1.3f;
	double ee = 3.4;
	// %f(float), %lf(double)
	//printf("dd = %f, ee = %lf\n", dd, ee);
	cout << "dd = " << dd << ", ee = " << ee << endl;

	// ������
	char AA = 65;
	unsigned char BB = 66;
	//printf("AA = %c, BB = %c\n", AA, BB);
	cout << "AA = " << AA << ", BB = " << BB << endl;


	return 0;
}