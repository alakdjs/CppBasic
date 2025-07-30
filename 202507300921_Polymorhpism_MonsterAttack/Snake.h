#pragma once
#include "Monster.h"

class Snake : public Monster {
private:
	int _poisonAttackRegist;	// �� �������׷�

public:
	Snake(std::string name, int health, int attack, int defense, int poisonAttackRegist);

	int GetPoisonAttackRegist();

	void GetDamage(int attack) override;

	void Info();
};

