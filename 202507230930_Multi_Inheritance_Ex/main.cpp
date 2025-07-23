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
		cout << "컴퓨터 " << _game << " 게임 실행 중" << endl;
	}
};

class Phone {
private:
	string _number;

public:
	Phone(string number)
		: _number(number) { }

	void call() {
		cout << "폰" << _number << " 과 전화 중" << endl;
	}
};

class SmartPhone : public Computer, public Phone {
public:
	SmartPhone(string game, string number)
		: Computer(game), Phone(number) { }
};

// Computer, Phone 클래스를 만들고 다중상속을 해서 SmartPhone 클래스만들고
// SmartPhone 객체 만든후에 작동시켜 보세요...

int main() {

	SmartPhone smartPhone("지뢰찾기", "010-1234-5678");

	smartPhone.Computer::playGame();
	smartPhone.Phone::call();


	return 0;
}