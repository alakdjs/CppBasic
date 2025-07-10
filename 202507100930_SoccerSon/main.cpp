#include <iostream>
#include <string>

using namespace std;

class SoccerSon {
private:
	string name;
	string team;
	string position;
	int age;
	int number;
	int goal;
	int assist;

public:
	void SetName(string value) {
		name = value;
	}

	void SetTeam(string value) {
		team = value;
	}

	void SetPositions(string value) {
		position = value;
	}

	void SetAge(int value) {
		age = value;
	}

	void SetNumber(int value) {
		number = value;
	}

	void SetGoal(int value) {
		goal = value;
	}

	void SetAssist(int value) {
		assist = value;
	}

	string GetName() {
		return name;
	}

	string GetTeam() {
		return team;
	}

	string GetPosition() {
		return position;
	}

	int GetAge() {
		return age;
	}

	int GetNumber() {
		return number;
	}

	int GetGoal() {
		return goal;
	}

	int GetAssist() {
		return assist;
	}

	void printInfo() {
		cout << "==선수정보==" << endl;
		cout << "이름: " << name << endl;
		cout << "팀: " << team << endl;
		cout << "포지션: " << position << endl;
		cout << "나이: " << age << endl;
		cout << "등번호: " << number << endl;
		cout << "골 수: " << goal << endl;
		cout << "어시스트 수: " << assist << endl;
	}

};

int main() {
	SoccerSon s;
	s.SetName("손흥민");
	s.SetTeam("토트넘");
	s.SetPositions("FW");
	s.SetAge(33);
	s.SetNumber(7);
	s.SetGoal(15);
	s.SetAssist(10);

	s.printInfo();

	return 0;
}


