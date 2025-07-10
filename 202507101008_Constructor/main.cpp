#include <iostream>
#include <string>

using namespace std;

class SoccerSon {
private:
    string name; // �̸�
    float speed;   // 100���� �޸���
    float weight;   // ������
    float height;   // ����
    string skill;   // �ֿ佺ų

public:
    // �����ڴ� �ݵ�� �ʿ��մϴ�.
    // �����ڸ� ������ ������ �����Ϸ� �ڵ����� �⺻ �����ڸ� ����
    // �־��ݴϴ�.
    // �⺻ �����ڴ� ���ڸ� ���� �ʴ� �������Դϴ�.
    // �����ڴ� ��������� �ʱ�ȭ�� ��ü�� ���鶧 ����Ǿ�� �ϴ� �۾����� �����ڿ��� ó���մϴ�.
    SoccerSon() {   // �⺻������
        cout << "SoccerSon �⺻������" << endl;
        name = "����";
        speed = 0.0f;
        weight = 0.0f;
        height = 0.0f;
        skill = "����";
    }


    void SetName(string value) {
        name = value;
    }

    string GetName() {
        return name;
    }

    void SetSpeed(float value) {
        speed = value;
    }

    float GetSpeed() {
        return speed;
    }

    void SetWeight(float value) {
        weight = value;
    }

    float GetWeight() {
        return weight;
    }

    void SetHeight(float value) {
        height = value;
    }

    float GetHeight() {
        return height;
    }

    void SetSkill(string value) {
        skill = value;
    }

    string GetSkill() {
        return skill;
    }

    void Info() {
        cout << "�̸�: " << name << endl;
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

    SoccerSon player2;

    player2.Info();


    return 0;
}