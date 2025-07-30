#include "Golem.h"
#include <iostream>

using namespace std;


Golem::Golem(std::string name, int health, int attack, int defense, int physicalRegist)
	: Monster(name, health, attack, defense), _physicalRegist(physicalRegist) {}

int Golem::GetPhysicalRegist() {
	return _physicalRegist;
}

void Golem::GetDamage(int attack) {
	cout << "Golem::GetDamage()" << endl;
	int damage = attack - GetDefense() - GetPhysicalRegist();

	if (damage <= 0) {
		damage = 0;
	}

	SetHealth(GetHealth() - damage);
}

void Golem::Info() {
	Monster::Info();
	cout << "물리저항력: " << _physicalRegist << endl;
}