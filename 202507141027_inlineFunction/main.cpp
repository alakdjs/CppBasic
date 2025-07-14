#include <iostream>
#include <string>

using namespace std;

// �ζ��� �Լ�

class Building {
private:
	std::string _name;
	float _area;
	int _maxFloor;

public:
	Building(string name, float area, int maxFloor)
		: _name(name), _area(area), _maxFloor(maxFloor) { }

	string GetName() {
		return _name;
	}

	float GetArea() {
		return _area;
	}

	int GetMaxFloor() {
		return _maxFloor;
	}

	void CheckFloor(int floor) {
		switch (floor) {
		case -1:
			cout << "���� 1�� ��� �ý����� üũ�մϴ�." << endl;
			break;

		case 1:
			cout << "1�� ���������� �ý����� üũ�մϴ�." << endl;
			break;

		case 2:
			cout << "2�� ��ȭ�ý����� üũ�մϴ�." << endl;

		default:
			cout << floor << "�� �Ϲݽý����� üũ�մϴ�." << endl;
			break;
		}
	}

	void CheckAllFloor() {
		cout << std::endl;
		cout << "������ ��� �ý����� üũ�մϴ�." << endl;

		for (int i = 0; i < _maxFloor; i++) {
			CheckFloor(i);
		}
	}
};

int main() {
	Building starTower("��ŸŸ��", 112300.23f, 23);

	cout << "������: " << starTower.GetName() << endl;
	cout << "��ü����: " << starTower.GetArea() << "��" << endl;
	cout << "��ü �� ��: " << starTower.GetMaxFloor() << "��" << endl;

	starTower.CheckFloor(-1);

	starTower.CheckAllFloor();


	return 0;
}