#include <iostream>

using namespace std;

// ���
// ���α׷��� ���� �帧�� ������ �� ���

// ���ǹ�
// - �б⹮(�б�: ���α׷��� �����帧�� �ٸ������� ������ ��)
// - ���Ǻб�: if, if-else, if-else-if, switch-case(���ù�)
// - ������ �б�: goto
// �ݺ���
// for, while, do-while

int main() {
	int a = 20;
	int b = 30;

	if (a > b) { // ���� ���ǹ�
		cout << a << "�� " << b << "���� ũ��." << endl;
	}

	if (a < b) {
		cout << a << "�� " << b << "���� �۴�." << endl;
	}
	else {
		cout << a << "�� " << b << "���� ũ�ų� ����" << endl;
	}

	int input = 0;
	cout << "0���� 10������ �������� �Է��ϼ���: ";
	cin >> input;

	if (input >= 0 && input < 3) { // ���� ���ǹ�
		cout << input << "�� 0���� 3������ �����̴�." << endl;
	}
	else if (input >= 3 && input < 5) {
		cout << input << "�� 5���� ũ�ų� ���� 8���� �۴�" << endl;
	}
	else { // ���� ����
		cout << input << "�� 8���� ũ�ų� 0���� �۴�" << endl;
	}

	return 0;
}