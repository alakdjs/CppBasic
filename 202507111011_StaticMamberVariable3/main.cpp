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
    static int MonsterCount; // ����������� , Ŭ���� ����

public:


    Monster(string name, int health, int attack, int defense)   // ���ڸ� �޴� ������
        : _name(name), _health(health), _attack(attack), _defense(defense)
    {
        MonsterCount++;

    }

    ~Monster() {   // �Ҹ���
        MonsterCount--;
    }

    static int GetMonsterCount() { // ��������Լ�, Ŭ�����Լ�
        // ��������Լ��ȿ����� ��������� �����ϸ� �ȵ˴ϴ�.
        //_name = "����";
        return MonsterCount;
    }


    void Info() { // �Ϲݸ���Լ�: ��ü�� ���ؼ��� ȣ��˴ϴ�.
        cout << "���͸�: " << _name << endl;
        cout << "�����: " << _health << endl;
        cout << "���ݷ�: " << _attack << endl;
        cout << "����: " << _defense << endl;
        cout << "���� �Ѽ�: " << MonsterCount << endl << endl;
    }
};


int Monster::MonsterCount = 0; // ����������� �ʱ�ȭ

int main() {

    cout << "0." << endl;
    cout << "���� ����: " << Monster::GetMonsterCount() << endl;

    Monster dragon("dragon", 100, 300, 200);
    cout << "1." << endl;
    cout << "���� ����: " << dragon.GetMonsterCount() << endl;
    {
        Monster ogre("ogre", 60, 10, 8);
        cout << "2." << endl;
        cout << "���� ����: " << Monster::GetMonsterCount() << endl;

        {
            Monster troll("troll", 60, 15, 10);
            cout << "3." << endl;
            cout << "���� ����: " << Monster::GetMonsterCount() << endl;


        }
        cout << "4." << endl;
        cout << "���� ����: " << Monster::GetMonsterCount() << endl;

    }
    cout << "5." << endl;
    cout << "���� ����: " << Monster::GetMonsterCount() << endl;
    Monster slime("slime", 30, 20, 5);
    cout << "6." << endl;
    cout << "���� ����: " << Monster::GetMonsterCount() << endl;



    return 0;
}