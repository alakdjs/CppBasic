#pragma once
#include <string>

class Slime;
class Golem;

class Monster {
private:
	std::string _name;
	int _health;	// 생명력
	int _attack;	// 공격력
	int _defense;	// 방어력

public:
	Monster(std::string name, int health, int attack, int defense);

	std::string GetName();

	virtual void GetDamage(int attack); // 가상함수

	int GetDefense();

	void SetHealth(int value);

	int GetHealth();

	void Attack(Monster& enemy);

	void Info();
};