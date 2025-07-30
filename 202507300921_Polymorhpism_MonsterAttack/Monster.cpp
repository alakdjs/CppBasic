#include "Monster.h"
#include "Slime.h"
#include "Golem.h"
#include <iostream>

using namespace std;

Monster::Monster(string name, int health, int attack, int defense)
	: _name(name), _health(health), _attack(attack), _defense(defense) {}

string Monster::GetName() {
	return _name;
}

void Monster::GetDamage(int attack) {
	int damage = attack - _defense;

	if (damage <= 0)
		damage = 0;

	_health -= damage;
}

int Monster::GetDefense() {
	return _defense;
}

void Monster::SetHealth(int value) {
	_health = value;
}

int Monster::GetHealth() {
	return _health;
}

void Monster::Attack(Monster& enemy) {
	cout << "Monster::Attack(Monster&)" << endl;
	int enemyOldHealth = enemy._health;
	enemy.GetDamage(_attack);

	cout << _name << "가 " << enemy._name << "을 공격해서 생명력이 " 
		<< enemyOldHealth << "에서 " << enemy._health << "로 감소함" << endl;
}


void Monster::Info() {
	cout << "이름: " << _name << endl;
	cout << "생명력: " << _health << endl;
	cout << "공격력: " << _attack << endl;
	cout << "방어력: " << _defense << endl;
}