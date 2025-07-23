#include <iostream>

using namespace std;

// Ŀ�Ǚ� ���� ���α׷� �����Ƿڸ� �޾ҽ��ϴ�.
// Ŀ�Ǚ��� ���ϴ�. Ŀ�Ǹ� ������ ��Ű�� �ڸ��� �ɾƼ�
// Ŀ�Ǚ��� ���� �帧�� �ľ��ؾ��մϴ�.
// Ŀ�Ǚ����� � ��Ȱ(role)�� � å��(responsibility)�� �ִ� �ľ��ϼž� �մϴ�.

// Ŀ�Ǚ����� � ��Ȱ�� �ֳ���?
// �մ� ĳ�þ� �ٸ���Ÿ
// guest cashier barista

class Drink {
private:
	string _name;

public:
	Drink(string name)
		: _name(name) {}
	
	string GetName() {
		return _name;
	}
};

class Coffee : public Drink {
public:
	Coffee()
		: Drink("Ŀ��") {}
};

class Latte : public Drink {
public:
	Latte()
		: Drink("��") {}

};

class Juice : public Drink {
public:
	Juice()
		: Drink("�ֽ�") {}
};

class Cola : public Drink{
public:
	Cola()
		: Drink("�ݶ�") {}
};

class Cidar : public Drink {
public:
	Cidar()
		: Drink("���̴�") {}
};

class Barista {
public:
	void MakeADrink(Drink& drink) {
		cout << drink.GetName() << "�� ����ϴ�." << endl;
	}
};

class Cashier {
private:
	Barista& _refBari;  // ����(agreggation)

public:
	Cashier(Barista& ref)
		: _refBari(ref) { }

	void OrderedDrink(Drink& drink) {
		cout << drink.GetName() << " �ֹ��� �޽��ϴ�." << endl;

		_refBari.MakeADrink(drink);
	}
};

class Guest {
public:
	void OrderingDrink(Cashier& ref, Drink& drink) {
		// ����������, �Ͻ�������
		cout << drink.GetName() << "�� �ֹ��մϴ�." << endl;
		ref.OrderedDrink(drink);
	}
};


int main() {
	Coffee coffee;
	Latte latte;
	Juice juice;
	Cola cola;
	Cidar cidar;

	Barista bari;
	Cashier cashier(bari);
	Guest guest;

	guest.OrderingDrink(cashier, coffee);
	cout << endl;
	guest.OrderingDrink(cashier, latte);
	cout << endl;
	guest.OrderingDrink(cashier, juice);
	cout << endl;
	guest.OrderingDrink(cashier, cola);
	cout << endl;
	guest.OrderingDrink(cashier, cidar);


	return 0;
}