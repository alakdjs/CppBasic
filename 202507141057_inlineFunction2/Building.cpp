#include "Building.h"
#include <iostream>

using namespace std;

Building::Building(string name, float area, int maxFloor)
	: _name(name), _area(area), _maxFloor(maxFloor) {
}

string Building::GetName() {
	return _name;
}

float Building::GetArea() {
	return _area;
}

int Building::GetMaxFloor() {
	return _maxFloor;
}

void Building::CheckFloor(int floor) {
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
}

void Building::CheckAllFloor() {
	cout << std::endl;
	cout << "������ ��� �ý����� üũ�մϴ�." << endl;

	for (int i = 0; i < _maxFloor; i++) {
		CheckFloor(i);
	}
}