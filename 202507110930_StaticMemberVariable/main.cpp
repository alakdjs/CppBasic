#include <iostream>
#include <string>
using namespace std;

// �������

class Monster {
private:
    string _name;
    int _health;
    int _attack;
    int _defense;

public:
    static int MonsterCount;

    Monster(string name, int health, int attack, int defense)   // ���ڸ� �޴� ������
        : _name(name), _health(health), _attack(attack), _defense(defense)
    {
        MonsterCount++;

    }

    ~Monster() {   // �Ҹ���
        MonsterCount--;
    }


    void Info() {
        cout << "���͸�: " << _name << endl;
        cout << "�����: " << _health << endl;
        cout << "���ݷ�: " << _attack << endl;
        cout << "����: " << _defense << endl;
        cout << "���� �Ѽ�: " << MonsterCount << endl << endl;
    }
};

int Monster::MonsterCount = 0; // ����������� �ʱ�ȭ

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