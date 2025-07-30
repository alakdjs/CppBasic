#include "Slime.h"
#include <iostream>

using namespace std;


Slime::Slime(string name, int health, int attack, int defense, int physicalAttackRegist)
	: Monster(name, health, attack, defense), _physicalAttackRegist(physicalAttackRegist) {
}

int Slime::GetPhysicalAttackRegist() {
	return _physicalAttackRegist;
}

void Slime::GetDamage(int attack) {
	cout << "Slime::GetDamage()" << endl;
	int damage = attack - GetDefense() - GetPhysicalAttackRegist();

	if (damage <= 0) {
		damage = 0;
	}

	SetHealth(GetHealth() - damage);
}

void Slime::Info() {
	Monster::Info();
	cout << "물리공격저항력: " << _physicalAttackRegist << endl;
}