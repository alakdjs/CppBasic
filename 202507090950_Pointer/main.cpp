#include <iostream>

using namespace std;

// ������
// C / C++ ���� �޸� �������� �ּҰ���
// �����ϴ� DataType�� ������ �ֽ��ϴ�.
// �� DataType�� �������� �̶�� �մϴ�.

int main() {
	int a = 20;

	cout << "&a = " << &a << endl;

	int* pa = &a; // ��������������

	int** ppa = &pa;

	**ppa; // ������ ������: �ּҰ��� ����ϴ� �����ڷ� �ش� �ּҰ��� �Ҵ� ���� ������ �ǹ�
	**&pa;
	*pa;
	*&a;
	a;

	cout << "&**ppa = " << &**ppa << endl;
	cout << "&**&pa = " << &**&pa << endl;
	cout << "&*pa = " << &*pa << endl;
	cout << "&*&a = " << &*&a << endl;
	cout << "&a = " << &a << endl;

	cout << endl;
	**ppa = 4000;

	cout << "**ppa = " << **ppa << endl;
	cout << "**&pa = " << **&pa << endl;
	cout << "*pa = " << *pa << endl;
	cout << "a = " << a << endl;

	return 0;

}