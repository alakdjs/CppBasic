#include <iostream>
#include "Dragon.h"
#include "Ogre.h"
#include "Slime.h"
#include "Golem.h"
#include "Snake.h"

using namespace std;

// 몬스터 전투

int main() {
	Dragon dragonA("dragonA", 100, 24, 10);
	Dragon dragonB("dragonB", 90, 20, 12);

	Ogre ogreA("ogreA", 50, 10, 8);
	Ogre ogreB("ogreB", 48, 11, 9);

	Slime slimeA("slimeA", 30, 5, 5, 8);
	Slime slimeB("slimeB", 28, 8, 7, 10);

	Golem golemA("golemA", 70, 30, 20, 20);

	Snake snakeA("snakeA", 30, 10, 7, 8);

	dragonA.Attack(dragonB);

	dragonB.Info();
	cout << endl;

	ogreA.Attack(ogreB);

	ogreB.Info();

	cout << endl;

	ogreA.Attack(dragonB);

	dragonB.Info();
	cout << endl;

	dragonA.Attack(ogreB);

	ogreB.Info();

	cout << endl;
	ogreA.Attack(slimeA);


	cout << endl;

	slimeA.Attack(ogreB);

	ogreB.Info();

	cout << endl;
	golemA.Attack(dragonA);
	cout << endl;

	dragonA.Attack(golemA);
	golemA.Info();
	cout << endl;

	ogreA.Attack(snakeA);
	cout << endl;


	return 0;
}