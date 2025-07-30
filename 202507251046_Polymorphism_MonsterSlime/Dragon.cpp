#include "Dragon.h"
#include "Ogre.h"
#include "Slime.h"
#include <iostream>

using namespace std;

Dragon::Dragon(string name, int health, int attack, int defense)
	: _name(name), _health(health), _attack(attack), _defense(defense) {
}

string Dragon::GetName() {
	return _name;
}

int Dragon::GetHealth() {
	return _health;
}

void Dragon::SetHealth(int value) {
	_health = value;
}

int Dragon::GetDefense() {
	return _defense;
}


void Dragon::Attack(Dragon& enemy) {
	int damage = _attack - enemy._defense;
	int enemyOldHealth = enemy._health;
	enemy._health -= damage;

	cout << _name << "�� " << enemy._name << "�� �����ؼ� ������� " << enemyOldHealth << "���� " << enemy._health << "�� ������" << endl;
}

void Dragon::Attack(Ogre& enemy) {
	int damage = _attack - enemy.GetDefense();
	int enemyOldHealth = enemy.GetHealth();

	if (damage < 0) {
		damage = 0;
	}

	int health = enemy.GetHealth() - damage;

	enemy.SetHealth(health);

	cout << _name << "�� " << enemy.GetName() << "�� �����ؼ� ������� " << enemyOldHealth << "���� " << enemy.GetHealth() << "�� ������" << endl;

}

void Dragon::Attack(Slime& enemy) {
	int damage = _attack - enemy.GetDefense() - enemy.GetPhysicalAttackRegist();
	int enemyOldHealth = enemy.GetHealth();

	if (damage < 0) {
		damage = 0;
	}

	int health = enemy.GetHealth() - damage;

	enemy.SetHealth(health);

	cout << _name << "�� " << enemy.GetName() << "�� �����ؼ� ������� " << enemyOldHealth << "���� " << enemy.GetHealth() << "�� ������" << endl;

}


void Dragon::Info() {
	cout << "�̸�: " << _name << endl;
	cout << "�����: " << _health << endl;
	cout << "���ݷ�: " << _attack << endl;
	cout << "����: " << _defense << endl;
}