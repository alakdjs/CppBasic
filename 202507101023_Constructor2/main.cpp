#include <iostream>
#include <string>

using namespace std;

//Ŭ���� �ȿ��� ��� ������ ���� ���� �̸��� ��ĥ �� �ֱ� ������, ������ ���� ��� ���� �տ� _�� ���Դϴ�.

class SoccerSon {
private:
    string _name; // �̸�
    float _speed;   // 100���� �޸���
    float _weight;   // ������
    float _height;   // ����
    string _skill;   // �ֿ佺ų

public:
    // �����ڴ� �ݵ�� �ʿ��մϴ�.
    // �����ڸ� ������ ������ �����Ϸ� �ڵ����� �⺻ �����ڸ� ����
    // �־��ݴϴ�.
    // �⺻ �����ڴ� ���ڸ� ���� �ʴ� �������Դϴ�.
    // �����ڴ� ��������� �ʱ�ȭ�� ��ü�� ���鶧 ����Ǿ�� �ϴ� �۾����� �����ڿ��� ó���մϴ�.
    SoccerSon() {   // �⺻������
        cout << "SoccerSon �⺻������" << endl;
        _name = "����";
        _speed = 0.0f;
        _weight = 0.0f;
        _height = 0.0f;
        _skill = "����";
    }

    SoccerSon(string name, float speed, float weight, float height, string skill) { // ���ڸ� �޴� ������
        cout << "���ڸ� 5�� �޴� ������" << endl;
        _name = name;
        _speed = speed;
        _weight = weight;
        _height = height;
        _skill = skill;
    }


    SoccerSon(string name) {
        cout << "���ڸ� 1�� �޴� ������" << endl;
        _name = name;
        _speed = 0.0f;
        _weight = 0.0f;
        _height = 0.0f;
        _skill = "����";
    }

    // ��ü�� �Ҹ�ɶ� ȣ��Ǿ����� ����Լ��� �Ҹ��� ��� ��
    // �Ҹ��� ��ü�� �Ҹ���� ���� ����Ǿ�� �ϴ� �۾��� �Ҹ��ڿ��� ��
    ~SoccerSon() {
        cout << "SoccerSon �Ҹ���" << endl;
    }


    void SetName(string value) {
        _name = value;
    }

    string GetName() {
        return _name;
    }

    void SetSpeed(float value) {
        _speed = value;
    }

    float GetSpeed() {
        return _speed;
    }

    void SetWeight(float value) {
        _weight = value;
    }

    float GetWeight() {
        return _weight;
    }

    void SetHeight(float value) {
        _height = value;
    }

    float GetHeight() {
        return _height;
    }

    void SetSkill(string value) {
        _skill = value;
    }

    string GetSkill() {
        return _skill;
    }

    void Info() {
        cout << "�̸�: " << _name << endl;
        cout << "100���� �޸���: " << GetSpeed() << "sec" << endl;
        cout << "������: " << GetWeight() << "kg" << endl;
        cout << "����: " << GetHeight() << "cm" << endl;
        cout << "�ֿ佺ų: " << GetSkill() << endl;
    }

};



int main() {
    // ������� �౸���ӿ��� �ʿ��� ����Ÿ�� �����ð�
    // ĸ��ȭ�ؼ� Ŭ������ ����Ÿ Ÿ���� �����
    // ��ü�� ����� ���� ������ �Ŀ� 
    // ��ü�� ����� ���� ����غ�����..

    // ��ü�� �����ɶ� �ڵ����� ȣ��Ǿ����� ����Լ��� �ֽ��ϴ�.
    // ��ü�� �����ɶ� ������ ȣ��˴ϴ�.
    // �� ����Լ��� ȣ��Ǿ������ ������ ��ü�� �����˴ϴ�.
    // �� ����Լ��� ������(constructor)��� �մϴ�.
    SoccerSon player;

    player.SetName("�����");
    player.SetSpeed(10.3f);
    player.SetWeight(80.0f);
    player.SetHeight(182.0f);
    player.SetSkill("OverHeadKick");

    cout << "�̸�: " << player.GetName() << endl;
    cout << "100���� �޸���: " << player.GetSpeed() << "sec" << endl;
    cout << "������: " << player.GetWeight() << "kg" << endl;
    cout << "����: " << player.GetHeight() << "cm" << endl;
    cout << "�ֿ佺ų: " << player.GetSkill() << endl;

    cout << endl;

    SoccerSon player2;   // �⺻������ ȣ��Ǹ鼭 ��ü ����

    player2.Info();

    cout << endl;
    SoccerSon player3("�����3", 11.0f, 80.0f, 184.0f, "�߰Ÿ���"); // ���ڸ� 5�� �޴� �����ڰ� ȣ��Ǹ鼭 ��ü�� �����˴ϴ�.

    player3.Info();

    cout << endl;
    SoccerSon player4("�����4"); // ���ڸ� 1�� �޴� �����ڰ� ȣ��Ǹ鼭 ��ü�� �����˴ϴ�.

    player4.Info();


    return 0;
}