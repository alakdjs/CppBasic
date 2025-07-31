#include "Ogre.h"
#include <iostream>

using namespace std;


Ogre::Ogre(string name, int health, int attack, int defense)
	: Monster(name, health, attack, defense) {}

void Ogre::GetDamage(int attack) {
	int damage = attack - _defense;

	if (damage <= 0)
		damage = 0;

	_health -= damage;
}