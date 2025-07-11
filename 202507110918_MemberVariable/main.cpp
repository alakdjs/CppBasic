#include <iostream>
#include <string>

using namespace std;

// Ŭ������ ���鶧 �ݵ�� ������ �ʿ��� ��찡 �ֽ��ϴ�.
class Student {
private:
    string _name;
    int _grade;
    int _classNum;

    const int MAXSTUDENTCOUNT;   // ��ü �л��� (����� �������)
    int& _specialClassNum;   // ƯȰ��  (������ �������)

public:

    // ����� ��������� ������ ��������� ������ �ʱ�ȭ ����Ʈ�� ���ؼ�
    // �ʱ�ȭ�� �ؾ� �մϴ�.
    // ������ �ʱ�ȭ ����Ʈ�� �ʱ�ȭ�� �����Ѵٴ� �ǹ̴�
    // ��ü�� �޸𸮰� �Ҵ�ʰ� ���ÿ� �ʱⰪ�� �ο��� �ȴٴ� ���Դϴ�.
    Student(string name, int grade, int classNum, int maxStudentCount, int& special)
        : _name(name), _grade(grade), _classNum(classNum), MAXSTUDENTCOUNT(maxStudentCount), _specialClassNum(special)
    {
        /*
        _name = name;
        _grade = grade;
        _classNum = classNum;
        */
    }


    void Info() {
        cout << "�̸�: " << _name << endl;
        cout << "�г�: " << _grade << endl;
        cout << "��: " << _classNum << endl;
        cout << "���л���: " << MAXSTUDENTCOUNT << endl;
        cout << "ƯȰ��: " << _specialClassNum << endl;
    }
};


int main() {

    int specialStudentNum = 11;

    Student st("Monster", 3, 5, 200, specialStudentNum);


    st.Info();
    cout << endl;

    specialStudentNum = 200;

    st.Info();


    return 0;
}