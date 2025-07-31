#pragma once
#include <string>

class Slime;
class Golem;

// 순수 가상함수를 하나라도 가지고 있는 클래스를 추상클래스(abstract class)
// 추상클래스는 자신의 객체를 생성하는 능력이 상실이 됩니다.
// 자신에게서 상속된 자식클래스가 자신의 순수가상함수를 구현하도록 강제하는 능력이 생깁니다.

class Monster {
protected:
	std::string _name;
	int _health;	// 생명력
	int _attack;	// 공격력
	int _defense;	// 방어력

public:
	Monster(std::string name, int health, int attack, int defense);

	std::string GetName();

	virtual void GetDamage(int attack) = 0; // 순수 가상함수 (구현부가 없는 멤버함수)

	int GetDefense();

	void SetHealth(int value);

	int GetHealth();

	void Attack(Monster& enemy);

	void Info();
};