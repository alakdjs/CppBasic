#include <iostream>

using namespace std;

// 몬스터 전투

class Ogre;

class Dragon {
private:
    string _name;
    int _health;   // 생명력
    int _attack;   // 공격력
    int _defense;   // 방어력

public:
    Dragon(string name, int health, int attack, int defense)
        : _name(name), _health(health), _attack(attack), _defense(defense) {
    }

    string GetName() {
        return _name;
    }

    int GetHealth() {
        return _health;
    }

    void SetHealth(int value) {
        _health = value;
    }

    int GetDefense() {
        return _defense;
    }


    void Attack(Dragon& enemy) {
        int damage = _attack - enemy._defense;
        int enemyOldHealth = enemy._health;
        enemy._health -= damage;

        cout << _name << "가 " << enemy._name << "을 공격해서 생명력이 " << enemyOldHealth << "에서 " << enemy._health << "로 감소함" << endl;
    }

    void Attack(Ogre& enemy) {
        int damage = _attack - enemy.GetDefense();
        int enemyOldHealth = enemy.GetHealth();

        if (damage < 0) {
            damage = 0;
        }

        int health = enemy.GetHealth() - damage;

        enemy.SetHealth(health);

        cout << _name << "가 " << enemy.GetName() << "을 공격해서 생명력이 " << enemyOldHealth << "에서 " << enemy.GetHealth() << "로 감소함" << endl;

    }




    void Info() {
        cout << "이름: " << _name << endl;
        cout << "생명력: " << _health << endl;
        cout << "공격력: " << _attack << endl;
        cout << "방어력: " << _defense << endl;
    }

};

class Ogre {
private:
    string _name;
    int _health;
    int _attack;
    int _defense;

public:
    Ogre(string name, int health, int attack, int defense)
        : _name(name), _health(health), _attack(attack), _defense(defense) {
    }

    string GetName() {

        return _name;
    }

    void SetHealth(int value) {
        _health = value;
    }

    int GetHealth() {
        return _health;
    }

    int GetDefense() {
        return _defense;
    }

    void Attack(Ogre& enemy) {
        int damage = _attack - enemy._defense;
        int enemyOldHealth = enemy._health;

        if (damage < 0) {
            damage = 0;
        }
        enemy._health -= damage;

        cout << _name << "가 " << enemy._name << "을 공격해서 생명력이 " << enemyOldHealth << "에서 " << enemy._health << "로 감소함" << endl;
    }

    void Attack(Dragon& enemy) {
        int damage = _attack - enemy.GetDefense();
        int enemyOldHealth = enemy.GetHealth();
        if (damage < 0) {
            damage = 0;
        }


        int health = enemy.GetHealth() - damage;

        enemy.SetHealth(health);

        cout << _name << "가 " << enemy.GetName() << "을 공격해서 생명력이 " << enemyOldHealth << "에서 " << enemy.GetHealth() << "로 감소함" << endl;

    }

    void Info() {
        cout << "이름: " << _name << endl;
        cout << "생명력: " << _health << endl;
        cout << "공격력: " << _attack << endl;
        cout << "방어력: " << _defense << endl;
    }
};

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