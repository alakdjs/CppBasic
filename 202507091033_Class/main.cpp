#include <iostream>
#include <string>


using namespace std;

// �ּ�, �ֹι�ȣ, ��������, �̸�, ����, ����
// ĸ��ȭ: Ŭ���� Ű����� �����͸� ���� ��
// ĸ��ȭ�� ���ؼ� Ŭ������ DataType Son

// class Ŭ������ {
//    Datas;
// };
class Son {
public:
    string address; // �������
    string juminNum;
    string name;
    int age;
    bool sungbyul;
};


int main() {
    Son a; // Ŭ������ DataType Son ���� a�� ����.

    // Ŭ������ ������ ����� �����Ҷ� .(period)�����ڸ� ����մϴ�.

    a.address = "����";
    a.juminNum = "1111111-1111111";
    a.name = "�����";
    a.age = 33;
    a.sungbyul = false;   // true: ����, false: ����


    cout << "�ּ�: " << a.address << endl;
    cout << "�ֹι�ȣ: " << a.juminNum << endl;
    cout << "�̸�: " << a.name << endl;
    cout << "����: " << a.age << endl;
    if (a.sungbyul) {
        cout << "����: ����" << endl;
    }
    else {
        cout << "����: ����" << endl;
    }

    return 0;
}