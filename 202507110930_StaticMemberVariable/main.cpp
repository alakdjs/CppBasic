#include <iostream>
#include <string>
using namespace std;

// 정적멤버

class Monster {
private:
    string _name;
    int _health;
    int _attack;
    int _defense;

public:
    static int MonsterCount;

    Monster(string name, int health, int attack, int defense)   // 인자를 받는 생성자
        : _name(name), _health(health), _attack(attack), _defense(defense)
    {
        MonsterCount++;

    }

    ~Monster() {   // 소멸자
        MonsterCount--;
    }


    void Info() {
        cout << "몬스터명: " << _name << endl;
        cout << "생명력: " << _health << endl;
        cout << "공격력: " << _attack << endl;
        cout << "방어력: " << _defense << endl;
        cout << "몬스터 총수: " << MonsterCount << endl << endl;
    }
};

int Monster::MonsterCount = 0; // 정적멤버변수 초기화

int main() {

    Monster dragon("dragon", 100, 300, 200);
    cout << "1." << endl;
    dragon.Info();
    {
        Monster ogre("ogre", 60, 10, 8);
        cout << "2." << endl;
        ogre.Info();

        {
            Monster troll("troll", 60, 15, 10);
            cout << "3." << endl;
            troll.Info();


        }
        cout << "4." << endl;
        ogre.Info();

    }
    cout << "5." << endl;
    dragon.Info();
    Monster slime("slime", 30, 20, 5);
    cout << "6." << endl;
    slime.Info();



    return 0;
}