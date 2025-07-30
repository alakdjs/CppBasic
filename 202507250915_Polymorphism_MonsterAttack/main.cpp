#include <iostream>
#include "Dragon.h"
#include "Ogre.h"

using namespace std;

// 몬스터 전투

int main() {
    Dragon dragonA("dragonA", 100, 24, 10);
    Dragon dragonB("dragonB", 90, 20, 12);

    Ogre ogreA("ogreA", 50, 10, 8);
    Ogre ogreB("ogreB", 48, 11, 9);

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


    return 0;
}