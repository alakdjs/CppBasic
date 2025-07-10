#include <iostream>
#include <string>

using namespace std;

// 클래스를 만들때 반드시 생성자 필요한 경우가 있음
class Student {
private:
	string _name;
	int _grade;
	int _classNum;

	const int MAXSTUDENTCOUNT; // 전체 학생수 (상수형 멤버변수)
	int& _specialClassNum; // 특활반 (참조형 멤버변수)

public:
	void Info() {
		cout << "이름: " << _name << endl;
		cout << "학년: " << _grade << endl;
		cout << "반: " << _classNum << endl;
		cout << "총학생수: " << MAXSTUDENTCOUNT << endl;
		cout << "특활반: " << _specialClassNum << endl;
	}
};

int main() {
	// Student st;

	return 0;
}