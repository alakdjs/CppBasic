#include <iostream>

using namespace std;

class Arm {
private:
	string _name;

public:
	Arm(string name)
		: _name(name) { }

	void Info() {
		cout << _name;
	}
};

class CannonArm : public Arm {
public:
	CannonArm()
		: Arm("ĳ���") { }
};

class BombArm : public Arm {
public:
	BombArm()
		: Arm("��ź��") { }
};

class LazerArm : public Arm {
public:
	LazerArm()
		: Arm("��������") { }
};

class GunArm : public Arm {
public:
	GunArm()
		: Arm("�Ǿ�") { }
};

class Robot {
private:
	string _name;
	Arm* _pLeftArm;
	Arm* _pRightArm;

public:
	Robot(string name, Arm* pLeftArm, Arm* pRightArm)
		: _name(name), _pLeftArm(pLeftArm), _pRightArm(pRightArm) { }

	void ChangeLeftArm(Arm* pLeftArm) {
		_pLeftArm = pLeftArm;
	}

	void ChangeRightArm(Arm* pRightArm) {
		_pRightArm = pRightArm;
	}

	void Info() {
		cout << " -- " << _name << " -- " << endl;
		cout << "������: ";
		_pLeftArm->Info();
		cout << endl;
		cout << "��������: ";
		_pRightArm->Info();
		cout << endl;
		cout << endl;
	}
};


int main() {
	CannonArm cannonArm;
	BombArm bombArm;
	LazerArm lazerArm;
	GunArm gunArm;

	Robot cannonArmRobot("ĳ��Ϸκ�", &cannonArm, &cannonArm);
	Robot bombArmRobot("��ź�Ϸκ�", &bombArm, &bombArm);
	Robot lazerArmRobot("�������Ϸκ�", &lazerArm, &lazerArm);
	Robot gunArmRobot("�ǾϷκ�", &gunArm, &gunArm);

	Robot lgunArmRlazerArmRobot("�ްǿ��������Ϸκ�", &gunArm, &lazerArm);


	cannonArmRobot.Info();
	cout << endl;
	bombArmRobot.Info();
	cout << endl;
	lazerArmRobot.Info();
	cout << endl;
	gunArmRobot.Info();
	cout << endl;
	lgunArmRlazerArmRobot.Info();
	cout << endl;

	lgunArmRlazerArmRobot.ChangeLeftArm(&bombArm);
	lgunArmRlazerArmRobot.Info();


	return 0;

}