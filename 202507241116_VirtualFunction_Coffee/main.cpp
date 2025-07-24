#include <iostream>

using namespace std;

// Ŀ�Ǚ� ���� ���α׷� �����Ƿڸ� �޾ҽ��ϴ�.
// Ŀ�Ǚ��� ���ϴ�. Ŀ�Ǹ� ������ ��Ű�� �ڸ��� �ɾƼ�
// Ŀ�Ǚ��� ���� �帧�� �ľ��ؾ��մϴ�.
// Ŀ�Ǚ����� � ��Ȱ(role)�� � å��(responsibility)�� �ִ� �ľ��ϼž� �մϴ�.

// Ŀ�Ǚ����� � ��Ȱ�� �ֳ���?
// �մ� ĳ�þ� �ٸ���Ÿ
// guest cashier barista


// ���������Լ��� �ϳ��� ������ �ִ� Ŭ������ �߻�Ŭ������� �մϴ�.
// �߻�Ŭ������ �ڽ��� ��ü�� ����� �ɷ��� ����� �˴ϴ�.
// �ڽ��� �ڽ��� �ڽ��� ���������Լ��� �ݵ�� �����ϵ��� �����ϴ� �ɷ��� ����ϴ�.
class Drink {
private:
    string _name;


public:
    Drink()
        : _name("����") {
    }

    virtual string GetName() {
        return _name;
    }

    virtual void MakeADrink() abstract; // ���������Լ�
};

class Coffee : public Drink {
private:
    string _name;

public:
    Coffee()
        : _name("Ŀ��") {
    }

    string GetName() override {
        return _name;
    }

    void MakeADrink() override {
        cout << _name << "�� ����ϴ�." << endl;
    }
};

class Latte : public Drink {
private:
    string _name;
public:
    Latte()
        : _name("��") {
    }

    string GetName() override {
        return _name;
    }

    void MakeADrink() override {
        cout << _name << "�� ����ϴ�." << endl;
    }
};


class Cola : public Drink {
private:
    string _name;

public:
    Cola()
        : _name("�ݶ�") {
    }

    string GetName() override {
        return _name;
    }

    void MakeADrink() override {
        cout << _name << "�� ����ϴ�." << endl;
    }
};

class Cidar : public Drink {
private:
    string _name;

public:
    Cidar()
        : _name("���̴�") {
    }

    string GetName() override {
        return _name;
    }

    void MakeADrink() override {
        cout << _name << "�� ����ϴ�." << endl;
    }
};

class Americano : public Drink {
private:
    string _name;

public:
    Americano()
        : _name("�Ƹ޸�ī��") {
    }

    string GetName() override {
        return _name;
    }

    void MakeADrink() override {
        cout << _name << "�� ����ϴ�." << endl;
    }
};

class Tea : public Drink {
private:
    string _name;

public:
    Tea()
        : _name("��") {
    }

    string GetName() override {
        return _name;
    }

    void MakeADrink() override {
        cout << _name << "�� ����ϴ�." << endl;
    }

};



class Barista {
public:
    void MakeADrink(Drink& drink) {
        drink.MakeADrink();
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
    //Drink drink;

    Coffee coffee;
    Latte latte;
    Cola cola;
    Cidar cidar;
    Americano americano;
    Tea tea;

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
    cout << endl;
    guest.OrderingDrink(cashier, tea);


    return 0;
}