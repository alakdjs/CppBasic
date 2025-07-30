#pragma once
#include <string>
#include "Monster.h"

class Golem : public Monster {
private:
	int _physicalRegist;	// ���� ���� ���׷�

public:
	Golem(std::string name, int health, int attack, int defense, int physicalRegist);

	int GetPhysicalRegist();

	void GetDamage(int attack) override;

	void Info();
};

