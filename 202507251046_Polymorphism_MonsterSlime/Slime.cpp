#include "Slime.h"
#include "Dragon.h"
#include "Ogre.h"
#include <string>
#include <iostream>

using namespace std;


Slime::Slime(string name, int health, int attack, int defense, int physicalAttackRegist)
	: _name(name), _health(health), _attack(attack), _defense(defense), _physicalAttackRegist(physicalAttackRegist) {
}

string Slime::GetName() {

	return _name;
}

void Slime::SetHealth(int value) {
	_health = value;
}

int Slime::GetHealth() {
	return _health;
}

int Slime::GetDefense() {
	return _defense;
}

int Slime::GetPhysicalAttackRegist() {
	return _physicalAttackRegist;
}

void Slime::Attack(Slime& enemy) {
	int damage = _attack - enemy._defense - enemy.GetPhysicalAttackRegist();
	int enemyOldHealth = enemy._health;

	if (damage < 0) {
		damage = 0;
	}
	enemy._health -= damage;

	cout << _name << "�� " << enemy._name << "�� �����ؼ� ������� " << enemyOldHealth << "���� " << enemy._health << "�� ������" << endl;
}

void Slime::Attack(Dragon& enemy) {
	int damage = _attack - enemy.GetDefense();
	int enemyOldHealth = enemy.GetHealth();
	if (damage < 0) {
		damage = 0;
	}


	int health = enemy.GetHealth() - damage;

	enemy.SetHealth(health);

	cout << _name << "�� " << enemy.GetName() << "�� �����ؼ� ������� " << enemyOldHealth << "���� " << enemy.GetHealth() << "�� ������" << endl;

}

void Slime::Attack(Ogre& enemy) {
	int damage = _attack - enemy.GetDefense();
	int enemyOldHealth = enemy.GetHealth();
	if (damage < 0) {
		damage = 0;
	}


	int health = enemy.GetHealth() - damage;

	enemy.SetHealth(health);

	cout << _name << "�� " << enemy.GetName() << "�� �����ؼ� ������� " << enemyOldHealth << "���� " << enemy.GetHealth() << "�� ������" << endl;

}


void Slime::Info() {
	cout << "�̸�: " << _name << endl;
	cout << "�����: " << _health << endl;
	cout << "���ݷ�: " << _attack << endl;
	cout << "����: " << _defense << endl;
	cout << "�����������׷�: " << _physicalAttackRegist << endl;
}