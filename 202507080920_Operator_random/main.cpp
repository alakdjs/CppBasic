#include <iostream>
#include <random>

using namespace std;

// % ������ ������
// ������ ���� ������ ������ ������ ���鶧 ���.

int main() {
	std::random_device rand;
	std::mt19937 random(rand());
	std::uniform_int_distribution<int> dist(0, 65535);

	int randValue = 0;
	int direction = 0;

	// North: 0, South: 1, West: 2, East: 3
	for (int i = 0; i < 10; i++) {
		randValue = dist(random); // ���� ���� ����
		direction = randValue % 4; // 0 ~ 3 ������ ������ ����

		cout << "������: " << randValue << ", ���Ⱚ: " << direction << endl;

		switch (direction) {
		case 0:
			cout << "�������� �̵�" << endl;
			break;

		case 1:
			cout << "�������� �̵�" << endl;
			break;

		case 2:
			cout << "�������� �̵�" << endl;
			break;

		case 3:
			cout << "�������� �̵�" << endl;
			break;

		}

		cout << endl;

	}

	return 0;

}