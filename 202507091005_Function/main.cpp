#include <iostream>

using namespace std;

// �Լ� (Function)

// returnType �Լ���(�Ű�����) {
//		��ɾ��;
// };
// returnType�� �Լ��� ��ɾ ó���� ������� � DataType���� �����ִ��� �˷��ִ� ����
// �Լ���: �Լ��� ȣ���Ҷ� ����ϴ� �̸�
// �Ű�����(parameter): �Լ��� ȣ���Ҷ� �����ϴ� ����(argument)���� �޴� ����

// ������ �ڵ�
// �ݺ��Ǵ� �ڵ�
// �� �ϳ��� ������ ������ �Լ��� ����մϴ�.

int add(int a, int b) {
	int sum = 0;
	sum = a + b;

	return sum;
}

void PrintMonster(int count) {
	for (int i = 0; i < count; i++) {
		cout << "Monster" << endl;
	}
}

int main() {

	PrintMonster(5);
	/*
	cout << "Monster" << endl;
	cout << "Monster" << endl;
	cout << "Monster" << endl;
	cout << "Monster" << endl;
	cout << "Monster" << endl;
	*/

	PrintMonster(3);
	/*
	cout << "Monster" << endl;
	cout << "Monster" << endl;
	cout << "Monster" << endl;
	*/

	PrintMonster(6);
	/*
	cout << "Monster" << endl;
	cout << "Monster" << endl;
	cout << "Monster" << endl;
	cout << "Monster" << endl;
	cout << "Monster" << endl;
	cout << "Monster" << endl;
	*/

	return 0;

}