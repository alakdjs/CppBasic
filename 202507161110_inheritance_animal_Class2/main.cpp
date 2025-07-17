#include <iostream>
#include <string>

using namespace std;

// ���
// �Ϲ�ȭ, Ư��ȭ

// ���� ���� �ùķ��̼� ����
// ��, ����, ��, ��, �����(�߰�)

// 1. ���뼺
// 2. ����������
// 3. Ȯ�强
// 4. �������� ��ݱ����� ����

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
        cout << _name << "�� ���մϴ�." << endl;
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

    void Speak() {
        cout << GetName() << "�� �����մϴ�." << endl;
    }

};

class Pig : public Stock {
public:
    Pig(string name, float weight, float height, float health)
        : Stock(name, weight, height, health) {
    }

    void Speak() {
        cout << GetName() << "�� �ܲ��մϴ�." << endl;
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

    void Speak() {
        cout << GetName() << "�� ������ �մϴ�." << endl;
    }

    void Run() {
        if (_isFly) {
            Fly();
        }
        else {
            Stock::Run();
        }
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

class Sheep : public Stock {
private:
    int _type;   // 0: ���� �����ϴ� ��, 1: ��⸦ �����ϴ� ��

public:
    Sheep(string name, float weight, float height, float health, int type)
        : Stock(name, weight, height, health), _type(type)
    {

    }

    void Speak() {
        cout << GetName() << "�� ���޿����մϴ�." << endl;
    }

    void Info() {
        Stock::Info();

        switch (_type) {
        case 0:
            cout << "����: �о�" << endl;
            break;

        case 1:
            cout << "����: ����" << endl;
            break;

        default:
            cout << "����: ��Ȯ��" << endl;
            break;
        }
    }
};

class Cat : public Stock {
private:
    int _color;

public:
    Cat(string name, float weight, float height, float health, int color)
        : Stock(name, weight, height, health), _color(color) {
    }

    void Speak() {
        cout << GetName() << "�� �߿��մϴ�." << endl;
    }

    void Info() {
        Stock::Info();

        switch (_color) {
        case 0:
            cout << "����: ��������" << endl;
            break;

        case 1:
            cout << "����: ���������" << endl;
            break;

        case 2:
            cout << "����: ġ������" << endl;
            break;

        default:
            cout << "����: ��Ȯ��" << endl;
            break;
        }
    }
};

int main() {

    Cow cow("��", 230.0f, 200.0f, 81.0f);
    Pig pig("����", 190.0f, 160.0f, 75.0f);
    Chicken flyChicken("���� ��", 4.0f, 40.0f, 60.0f, true);
    Chicken notFlyChicken("������ ��", 3.8f, 40.0f, 60.0f, false);
    Sheep purSheep("�� ��", 100.0f, 110.0f, 80.0f, 0);
    Sheep beefSheep("��� ��", 120.0f, 120.0f, 70.0f, 1);
    Cat cat("�����", 6.0f, 70.0f, 90.0f, 1);

    cow.Speak();
    pig.Speak();
    flyChicken.Speak();
    notFlyChicken.Speak();
    purSheep.Speak();
    beefSheep.Speak();
    cat.Speak();

    cout << endl;
    cow.Run();
    pig.Run();
    flyChicken.Run();
    notFlyChicken.Run();
    purSheep.Run();
    beefSheep.Run();
    cat.Run();

    cout << endl;
    cow.Info();
    cout << endl;
    pig.Info();
    cout << endl;
    flyChicken.Info();
    cout << endl;
    notFlyChicken.Info();
    cout << endl;
    purSheep.Info();
    cout << endl;
    beefSheep.Info();
    cout << endl;
    cat.Info();


    return 0;
}