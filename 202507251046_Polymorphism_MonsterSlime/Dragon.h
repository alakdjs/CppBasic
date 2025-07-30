#pragma once
#include <string>

class Ogre;
class Slime;

class Dragon {
private:
	std::string _name;
	int _health;	// �����
	int _attack;	// ���ݷ�
	int _defense;	// ����

public:
	Dragon(std::string name, int health, int attack, int defense);

	std::string GetName();

	int GetHealth();

	void SetHealth(int value);

	int GetDefense();

	void Attack(Dragon& enemy);

	void Attack(Ogre& enemy);

	void Attack(Slime& enemy);

	void Info();

};