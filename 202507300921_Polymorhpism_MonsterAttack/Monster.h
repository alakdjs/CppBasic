#pragma once
#include <string>

class Slime;
class Golem;

class Monster {
private:
	std::string _name;
	int _health;	// �����
	int _attack;	// ���ݷ�
	int _defense;	// ����

public:
	Monster(std::string name, int health, int attack, int defense);

	std::string GetName();

	virtual void GetDamage(int attack); // �����Լ�

	int GetDefense();

	void SetHealth(int value);

	int GetHealth();

	void Attack(Monster& enemy);

	void Info();
};