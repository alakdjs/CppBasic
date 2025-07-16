#include <iostream>
#include <string>

using namespace std;

// ���
// �Ϲ�ȭ, Ư��ȭ

// ���� ���� �ùķ��̼� ����
// ��, ����, ��

class Stock {
private:
    string _name;   // �̸�
    float _weight;   // ������
    float _height; // Ű
    float _health;   // �ǰ�����

public:
    Stock(string name, float weight, float height, float health)
        : _name(name), _weight(weight), _height(height), _health(health) {
    }

    string GetName() {
        return _name;
    }

    void Speak() {
        cout << _name << "�� �����մϴ�." << endl;
    }

    void Run() {
        cout << _name << "�� �ݴϴ�. " << endl;
    }

    void Eat() {
        cout << _name << "�� �Դ´�." << endl;
    }

    string GetHealth() {
        if (_health > 80) {
            return "�ſ�ǰ�";
        }
        else if (_health > 60 && _health <= 80) {
            return "�ǰ�";
        }
        else if (_health > 40 && _health <= 60) {
            return "�ν�";
        }
        else {
            return "ġ����";
        }
    }

    void Info() {
        cout << "�̸�: " << _name << endl;
        cout << "������: " << _weight << endl;
        cout << "����: " << _height << endl;
        cout << "�ǰ�����: " << GetHealth() << endl;
    }

};

class Cow : public Stock {
public:
    Cow(string name, float weight, float height, float health)
        : Stock(name, weight, height, health) {
    }

};

class Pig : public Stock {
public:
    Pig(string name, float weight, float height, float health)
        : Stock(name, weight, height, health) {
    }

};

class Chicken : public Stock {
private:
    bool _isFly;

    void Fly() {
        cout << GetName() << "�� ���ϴ�." << endl;
    }

public:
    Chicken(string name, float weight, float height, float health, bool isFly)
        : Stock(name, weight, height, health), _isFly(isFly) {
    }


    void Info() {
        Stock::Info();

        if (_isFly) {
            cout << "����: ���� ��" << endl;
        }
        else {
            cout << "����: ������ ��" << endl;
        }
        cout << endl;
    }

};

int main() {

    Cow cow("��", 230.0f, 200.0f, 81.0f);
    Pig pig("����", 190.0f, 160.0f, 75.0f);
    Chicken flyChicken("���� ��", 4.0f, 40.0f, 60.0f, true);
    Chicken notFlyChicken("������ ��", 3.8f, 40.0f, 60.0f, false);

    cow.Speak();
    pig.Speak();
    flyChicken.Speak();
    notFlyChicken.Speak();

    cout << endl;
    cow.Run();
    pig.Run();
    flyChicken.Run();
    notFlyChicken.Run();

    cout << endl;
    cow.Info();
    cout << endl;
    pig.Info();
    cout << endl;
    flyChicken.Info();
    cout << endl;
    notFlyChicken.Info();


    return 0;
}