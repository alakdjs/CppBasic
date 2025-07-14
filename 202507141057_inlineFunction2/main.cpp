#include <iostream>
#include <string>
#include "Building.h"

using namespace std;

// �ζ��� �Լ�

// C++�� �»������� C����� ���� ������ ������� ������ �Ǿ
// �����(.h, �������), ������(.cpp)�� ����� ������ �ϵ��� �Ǿ��ֽ��ϴ�.
// Ŭ���� ���ο��� �Լ��� ������ �ϴ� ��쿡�� �����Ϸ� �����ο� ����Լ���
// �������� ���ʹ� �ٸ��� �޾Ƶ帳�ϴ�.
// class ����ξȿ� ����Լ��� �����ΰ� �ִ� ��쿡��
// �����Ϸ� �ش� ����Լ��� inline�Լ��� �����޶�� ��û���� �޾Ƶ帳�ϴ�.



int main() {
	Building starTower("��ŸŸ��", 112300.23f, 23);

	cout << "������: " << starTower.GetName() << endl;
	cout << "��ü����: " << starTower.GetArea() << "��" << endl;
	cout << "��ü����: " << starTower.GetMaxFloor() << "��" << endl;

	starTower.CheckFloor(-1);

	int floor = -1;
	switch (floor) {
	case -1:
		cout << "���� 1�� ��� �ý����� üũ�մϴ�." << endl;
		break;

	case 1:
		cout << "1�� ���������� �ý����� üũ�մϴ�." << endl;
		break;

	case 2:
		cout << "2�� ��ȭ�ý����� üũ�մϴ�." << endl;
		break;

	default:
		cout << floor << "�� �Ϲݽý����� üũ�մϴ�." << endl;
		break;
	}


	starTower.CheckAllFloor();


	return 0;
}