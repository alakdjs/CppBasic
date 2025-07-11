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
    static int MonsterCount; // 정적멤버변수 , 클래스 변수

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

    cout << "0." << endl;
    cout << "몬스터 갯수: " << Monster::MonsterCount << endl;

    Monster dragon("dragon", 100, 300, 200);
    cout << "1." << endl;
    cout << "몬스터 갯수: " << Monster::MonsterCount << endl;
    {
        Monster ogre("ogre", 60, 10, 8);
        cout << "2." << endl;
        cout << "몬스터 갯수: " << Monster::MonsterCount << endl;

        {
            Monster troll("troll", 60, 15, 10);
            cout << "3." << endl;
            cout << "몬스터 갯수: " << Monster::MonsterCount << endl;


        }
        cout << "4." << endl;
        cout << "몬스터 갯수: " << Monster::MonsterCount << endl;

    }
    cout << "5." << endl;
    cout << "몬스터 갯수: " << Monster::MonsterCount << endl;
    Monster slime("slime", 30, 20, 5);
    cout << "6." << endl;
    cout << "몬스터 갯수: " << Monster::MonsterCount << endl;



    return 0;
}