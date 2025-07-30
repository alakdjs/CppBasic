#include "Snake.h"
#include <iostream>

using namespace std;

Snake::Snake(string name, int health, int attack, int defense, int poisonAttackRegist)
	: Monster(name, health, attack, defense), _poisonAttackRegist(poisonAttackRegist) {}

int Snake::GetPoisonAttackRegist() {
	return _poisonAttackRegist;
}

void Snake::GetDamage(int attack) {
	cout << "Snake::GetDamage()" << endl;
	int damage = attack - GetDefense() - GetPoisonAttackRegist();

	if (damage <= 0) {
		damage = 0;
	}

	SetHealth(GetHealth() - damage);
}

void Snake::Info() {
	Monster::Info();
	cout << "독 공격저항력: " << _poisonAttackRegist << endl;
}