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

	cout << _name << "�� " << enemy._name << "�� �����ؼ� ������� " 
		<< enemyOldHealth << "���� " << enemy._health << "�� ������" << endl;
}


void Monster::Info() {
	cout << "�̸�: " << _name << endl;
	cout << "�����: " << _health << endl;
	cout << "���ݷ�: " << _attack << endl;
	cout << "����: " << _defense << endl;
}