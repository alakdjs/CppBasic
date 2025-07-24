#include <iostream>

using namespace std;

// Ŀ�Ǚ� ���� ���α׷� �����Ƿڸ� �޾ҽ��ϴ�.
// Ŀ�Ǚ��� ���ϴ�. Ŀ�Ǹ� ������ ��Ű�� �ڸ��� �ɾƼ�
// Ŀ�Ǚ��� ���� �帧�� �ľ��ؾ��մϴ�.
// Ŀ�Ǚ����� � ��Ȱ(role)�� � å��(responsibility)�� �ִ� �ľ��ϼž� �մϴ�.

// Ŀ�Ǚ����� � ��Ȱ�� �ֳ���?
// �մ� ĳ�þ� �ٸ���Ÿ
// guest cashier barista

enum DrinkKind {
    COFFEE,
    LATTE,
    COLA,
    CIDAR,
    AMERICANO
};

class Drink {
private:
    string _name;
    DrinkKind _type;

public:
    Drink(DrinkKind type)
        : _name("����"), _type(type) {
    }

    string GetName() {
        return _name;
    }

    DrinkKind GetType() {
        return _type;
    }

    void MakeADrink() {
        cout << _name << "�� ����ϴ�." << endl;
    }
};

class Coffee : public Drink {
private:
    string _name;

public:
    Coffee()
        : Drink(COFFEE), _name("Ŀ��") {
    }

    string GetName() {
        return _name;
    }

    void MakeADrink() {
        cout << _name << "�� ����ϴ�." << endl;
    }
};

class Latte : public Drink {
private:
    string _name;
public:
    Latte()
        : Drink(LATTE), _name("��") {
    }

    string GetName() {
        return _name;
    }

    void MakeADrink() {
        cout << _name << "�� ����ϴ�." << endl;
    }
};


class Cola : public Drink {
private:
    string _name;

public:
    Cola()
        : Drink(COLA), _name("�ݶ�") {
    }

    string GetName() {
        return _name;
    }

    void MakeADrink() {
        cout << _name << "�� ����ϴ�." << endl;
    }
};

class Cidar : public Drink {
private:
    string _name;

public:
    Cidar()
        : Drink(CIDAR), _name("���̴�") {
    }

    string GetName() {
        return _name;
    }

    void MakeADrink() {
        cout << _name << "�� ����ϴ�." << endl;
    }
};

class Americano : public Drink {
private:
    string _name;

public:
    Americano()
        : Drink(AMERICANO), _name("�Ƹ޸�ī��") {
    }

    string GetName() {
        return _name;
    }

    void MakeADrink() {
        cout << _name << "�� ����ϴ�." << endl;
    }
};

class Barista {
public:
    void MakeADrink(Drink& drink) {
        switch (drink.GetType()) {
        case COFFEE:
            ((Coffee&)drink).MakeADrink(); // UpCasting
            break;

        case LATTE:
            ((Coffee&)drink).MakeADrink(); // UpCasting
            break;

        case COLA:
            ((Coffee&)drink).MakeADrink(); // UpCasting
            break;

        case CIDAR:
            ((Coffee&)drink).MakeADrink(); // UpCasting
            break;

        case AMERICANO:
            ((Coffee&)drink).MakeADrink(); // UpCasting
            break;
        }
    }
};

class Cashier {
private:
    Barista& _refBari;   // ����(agreggation)

public:
    Cashier(Barista& ref)
        : _refBari(ref) {
    }

    void OrderedDrink(Drink& drink) {
        cout << drink.GetName() << " �ֹ��� �޽��ϴ�." << endl;

        _refBari.MakeADrink(drink);
    }
};

class Guest {
public:
    void OrderingDrink(Cashier& ref, Drink& drink) {   // ����������, �Ͻ�������
        cout << drink.GetName() << "�� �ֹ��մϴ�." << endl;
        ref.OrderedDrink(drink);
    }
};


int main() {
    Coffee coffee;
    Latte latte;
    Cola cola;
    Cidar cidar;
    Americano americano;

    Barista bari;
    Cashier cashier(bari);
    Guest guest;

    guest.OrderingDrink(cashier, coffee);
    cout << endl;
    guest.OrderingDrink(cashier, latte);
    cout << endl;
    guest.OrderingDrink(cashier, cola);
    cout << endl;
    guest.OrderingDrink(cashier, cidar);
    cout << endl;
    guest.OrderingDrink(cashier, americano);


    return 0;
}