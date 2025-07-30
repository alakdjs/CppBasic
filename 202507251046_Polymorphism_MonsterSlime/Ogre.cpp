#include "Ogre.h"
#include "Dragon.h"
#include "Slime.h"
#include <iostream>

using namespace std;


Ogre::Ogre(string name, int health, int attack, int defense)
	: _name(name), _health(health), _attack(attack), _defense(defense) {
}

string Ogre::GetName() {

	return _name;
}

void Ogre::SetHealth(int value) {
	_health = value;
}

int Ogre::GetHealth() {
	return _health;
}

int Ogre::GetDefense() {
	return _defense;
}

void Ogre::Attack(Ogre& enemy) {
	int damage = _attack - enemy._defense;
	int enemyOldHealth = enemy._health;

	if (damage < 0) {
		damage = 0;
	}
	enemy._health -= damage;

	cout << _name << "�� " << enemy._name << "�� �����ؼ� ������� " << enemyOldHealth << "���� " << enemy._health << "�� ������" << endl;
}

void Ogre::Attack(Dragon& enemy) {
	int damage = _attack - enemy.GetDefense();
	int enemyOldHealth = enemy.GetHealth();
	if (damage < 0) {
		damage = 0;
	}


	int health = enemy.GetHealth() - damage;

	enemy.SetHealth(health);

	cout << _name << "�� " << enemy.GetName() << "�� �����ؼ� ������� " << enemyOldHealth << "���� " << enemy.GetHealth() << "�� ������" << endl;

}

void Ogre::Attack(Slime& enemy) {
	int damage = _attack - enemy.GetDefense() - enemy.GetPhysicalAttackRegist();
	int enemyOldHealth = enemy.GetHealth();
	if (damage < 0) {
		damage = 0;
	}


	int health = enemy.GetHealth() - damage;

	enemy.SetHealth(health);

	cout << _name << "�� " << enemy.GetName() << "�� �����ؼ� ������� " << enemyOldHealth << "���� " << enemy.GetHealth() << "�� ������" << endl;

}

void Ogre::Info() {
	cout << "�̸�: " << _name << endl;
	cout << "�����: " << _health << endl;
	cout << "���ݷ�: " << _attack << endl;
	cout << "����: " << _defense << endl;
}