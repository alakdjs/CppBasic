#include <iostream>
#include <string>

using namespace std;

class Computer {
private:
	string _game;

public:
	Computer(string game)
		: _game(game) { }

	void playGame() {
		cout << "��ǻ�� " << _game << " ���� ���� ��" << endl;
	}
};

class Phone {
private:
	string _number;

public:
	Phone(string number)
		: _number(number) { }

	void call() {
		cout << "��" << _number << " �� ��ȭ ��" << endl;
	}
};

class SmartPhone : public Computer, public Phone {
public:
	SmartPhone(string game, string number)
		: Computer(game), Phone(number) { }
};

// Computer, Phone Ŭ������ ����� ���߻���� �ؼ� SmartPhone Ŭ���������
// SmartPhone ��ü �����Ŀ� �۵����� ������...

int main() {

	SmartPhone smartPhone("����ã��", "010-1234-5678");

	smartPhone.Computer::playGame();
	smartPhone.Phone::call();


	return 0;
}