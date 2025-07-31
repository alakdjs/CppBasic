#pragma once
#include <string>

class Slime;
class Golem;

// ���� �����Լ��� �ϳ��� ������ �ִ� Ŭ������ �߻�Ŭ����(abstract class)
// �߻�Ŭ������ �ڽ��� ��ü�� �����ϴ� �ɷ��� ����� �˴ϴ�.
// �ڽſ��Լ� ��ӵ� �ڽ�Ŭ������ �ڽ��� ���������Լ��� �����ϵ��� �����ϴ� �ɷ��� ����ϴ�.

class Monster {
protected:
	std::string _name;
	int _health;	// �����
	int _attack;	// ���ݷ�
	int _defense;	// ����

public:
	Monster(std::string name, int health, int attack, int defense);

	std::string GetName();

	virtual void GetDamage(int attack) = 0; // ���� �����Լ� (�����ΰ� ���� ����Լ�)

	int GetDefense();

	void SetHealth(int value);

	int GetHealth();

	void Attack(Monster& enemy);

	void Info();
};