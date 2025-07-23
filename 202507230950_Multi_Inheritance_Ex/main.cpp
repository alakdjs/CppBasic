#include <iostream>
#include <string>

using namespace std;

class Computer {
private:
    string _id;

public:
    Computer(string id)
        : _id(id) {
    }

    void Login() {
        cout << _id << "�� �α����� �մϴ�." << endl;
    }

    void LogOut() {
        cout << _id << "�� �α׾ƿ��մϴ�. " << endl;
    }

    void PlayGame(string gameName) {
        cout << gameName << "�� �÷��� �մϴ�." << endl;
    }

    void SendKakaoTalkMessage(string id, string message) {
        cout << id << "���� " << message << "�� �����ϴ�." << endl;
    }

    void ReceiveKakaoTalkMessage(string id, string message) {
        cout << id << "���� " << message << "�� �޾ҽ��ϴ�." << endl;
    }

};

class Phone {
private:
    string _number;

public:
    Phone(string number)
        : _number(number) {
    }

    void SendCall(string number) {
        cout << _number << "���� " << number << "�� ��ȭ�� �̴ϴ�." << endl;
    }

    void ReceiveCall(string number) {
        cout << number << "���� " << _number << "�� �ɷ��� ��ȭ�� �޽��ϴ�." << endl;
    }

    void SendMessage(string number, string message) {
        cout << number << "�� [ " << message << "]�� �����ϴ�." << endl;
    }

    void ReceiveMessage(string number, string message) {
        cout << number << "���� [" << message << "] �� �����߽��ϴ�." << endl;
    }

};


class SmartPhone : public Computer, public Phone {
public:
    SmartPhone(string phoneNumber, string id)
        : Phone(phoneNumber), Computer(id) {
    }

    void Login(string password) {
        Computer::Login();
    }

};

// Computer, Phone Ŭ������ ����� ���߻���� �ؼ� SmartPhone Ŭ���������
// SmartPhone ��ü �����Ŀ� �۵����� ������...

int main() {

    SmartPhone smartPhone("000-0000-0000", "monster");

    smartPhone.Login("00000");

    smartPhone.SendCall("111-1111-1111");
    smartPhone.ReceiveCall("222-2222-2222");

    smartPhone.SendMessage("333-3333-3333", "�ȳ��ϼ���");
    smartPhone.ReceiveMessage("333-3333-3333", "��������");

    smartPhone.PlayGame("������");



    return 0;
}