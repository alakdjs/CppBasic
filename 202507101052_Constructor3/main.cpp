#include <iostream>
#include <string>

using namespace std;

// Ŭ������ ���鶧 �ݵ�� ������ �ʿ��� ��찡 ����
class Student {
private:
	string _name;
	int _grade;
	int _classNum;

	const int MAXSTUDENTCOUNT; // ��ü �л��� (����� �������)
	int& _specialClassNum; // ƯȰ�� (������ �������)

public:
	void Info() {
		cout << "�̸�: " << _name << endl;
		cout << "�г�: " << _grade << endl;
		cout << "��: " << _classNum << endl;
		cout << "���л���: " << MAXSTUDENTCOUNT << endl;
		cout << "ƯȰ��: " << _specialClassNum << endl;
	}
};

int main() {
	// Student st;

	return 0;
}