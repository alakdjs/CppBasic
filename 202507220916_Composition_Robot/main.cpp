#include <iostream>

using namespace std;

class CannonArm {
private:
	string _name;

public:
	CannonArm()
		: _name("ĳ���") { }

	void Info() {
		cout << _name;
	}
};

class BombArm {
private:
	string _name;

public:
	BombArm()
		: _name("��ź��") { }

	void Info() {
		cout << _name;
	}
};

class LazerArm {
private:
	string _name;

public:
	LazerArm()
		: _name("��������") { }

	void Info() {
		cout << _name;
	}
};

class CannonArmRobot {
private:
	CannonArm _leftArm, _rightArm;

public:
	CannonArmRobot() { }

	void Info() {
		cout << "-- ĳ��� �κ� --" << endl;
		cout << "������: ";
		_leftArm.Info();
		cout << endl;
		cout << "��������: ";
		_rightArm.Info();
		cout << endl;
		cout << endl;
	}
};

class BombArmRobot {
private:
	BombArm _leftArm, _rightArm;

public:
	BombArmRobot() {}

	void Info() {
		cout << "-- ��ź�� �κ� -- " << endl;
		cout << "������: ";
		_leftArm.Info();
		cout << endl;
		cout << "��������: ";
		_rightArm.Info();
		cout << endl;
		cout << endl;
	}
};

class LazerArmRobot {
private:
	LazerArm _leftArm, _rightArm;

public:
	LazerArmRobot() { }

	void Info() {
		cout << "-- �������� �κ� -- " << endl;
		cout << "������: ";
		_leftArm.Info();
		cout << endl;
		cout << "��������: ";
		_rightArm.Info();
		cout << endl;
		cout << endl;
	}
};

int main() {
	CannonArmRobot cannonArmRobot;
	BombArmRobot bombArmRobot;
	LazerArmRobot lazerArmRobot;

	cannonArmRobot.Info();
	cout << endl;
	bombArmRobot.Info();
	cout << endl;
	lazerArmRobot.Info();


	return 0;
}