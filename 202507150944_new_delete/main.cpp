#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Monster {
public:
    string _name;
    int _health;
    int _attack;
    int _defense;

public:
    Monster() // �⺻������
        : _name(""), _health(0), _attack(0), _defense(0) {
    }

    Monster(string name, int health, int attack, int defense)   // ���ڸ� �޴� ������
        : _name(name), _health(health), _attack(attack), _defense(defense)
    {
        cout << _name << "������" << endl;
    }

    ~Monster() {
        cout << _name << "�Ҹ���" << endl;
    }

    void Attack() {
        //cout << _name << "�� �����Ѵ�." << endl;
        cout << _attack << "�����Ѵ�." << endl;
    }

    void Defense() {
        cout << _name << "�� ����Ѵ�." << endl;
    }

    void Info() {
        cout << "���͸�: " << this->_name << endl;
        cout << "�����: " << _health << endl;
        cout << "���ݷ�: " << _attack << endl;
        cout << "����: " << _defense << endl;
    }

};

int main() {
    // C�� malloc, calloc, realloc�̶�� �����޸� �Ҵ� �Լ��� ���
    int* pa = (int*)malloc(sizeof(int));

    *pa = 300;

    cout << "pa = " << pa << endl; // �Ҵ�� �����޸� ������ �ּҰ��� ���
    cout << "*pa = " << *pa << endl;   // �����޸𸮰����� ����� ���� ���

    free(pa); // �Ҵ�� �����޸� ������ �Ҵ�����.
    pa = NULL; // �ݳ�ó���� �ּҰ��� NULL�� �ʱ�ȭ �ϴ� ���� �����ϴ�.
    free(pa);

    // C++������ new �����ڷ� �����޸� ������ �Ҵ�.
    pa = new int; // new �����ڸ� ����ؼ� int �� �����޸� ������ �Ҵ�

    *pa = 2342;

    cout << "pa = " << pa << endl;
    cout << "*pa = " << *pa << endl;

    delete pa; // �ݳ�ó�� 

    // ��ü�� �������� �Ҵ��Ҷ��� �ݵ�� new �����ڸ� ����ؾ� �մϴ�.
    // new �����ڸ� ����ؼ� ��ü�� �Ҵ��ؾ߸� �����ڸ� ȣ���Ͽ�
    // ������ ��ü�� ������ �� �ֽ��ϴ�.

    Monster* pmons = new Monster("�巡��", 100, 30, 20);   // ���ڸ� �޴� �����ڰ� ȣ��.

    pmons->Attack();
    cout << endl;
    pmons->Defense();
    cout << endl;
    pmons->Info();

    delete pmons;   // ��ü�� delete�����ڷ� �ݳ�ó�� �ؾ� �մϴ�. 
    //  delete �����ڴ� ��ü�� �ݳ�ó���Ҷ� �Ҹ��ڸ� ȣ�� ���� �ݴϴ�.
    cout << endl;

    pmons = new Monster();   // �⺻�����ڰ� ȣ�� �Ǹ鼭 ������ü ����.
    pmons->Info();

    delete pmons;


    return 0;
}