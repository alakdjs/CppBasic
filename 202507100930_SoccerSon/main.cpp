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
		cout << "==��������==" << endl;
		cout << "�̸�: " << name << endl;
		cout << "��: " << team << endl;
		cout << "������: " << position << endl;
		cout << "����: " << age << endl;
		cout << "���ȣ: " << number << endl;
		cout << "�� ��: " << goal << endl;
		cout << "��ý�Ʈ ��: " << assist << endl;
	}

};

int main() {
	SoccerSon s;
	s.SetName("�����");
	s.SetTeam("��Ʈ��");
	s.SetPositions("FW");
	s.SetAge(33);
	s.SetNumber(7);
	s.SetGoal(15);
	s.SetAssist(10);

	s.printInfo();

	return 0;
}


