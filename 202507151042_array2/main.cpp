#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class Monster {
private:
	string _name;
	int _health;
	int _attack;
	int _defense;

public:
	Monster() {
		cout << "Monter �⺻������" << endl;
		_name = "";
		_health = 0;
		_attack = 0;
		_defense = 0;
	}

	Monster(string name, int health, int attack, int defense)
		: _name(name), _health(health), _attack(attack), _defense(defense)
	{
		cout << _name << "Monster ���ڸ� �޴� ������" << endl;
	}

	~Monster() {
		cout << _name << "�Ҹ���" << endl;
	}

	void Init(string name, int health, int attack, int defense) {
		_name = name;
		_health = health;
		_attack = attack;
		_defense = defense;
	}

	void Attack() {
		cout << _name << "�� �����Ѵ�." << endl;
	}

	void Defense() {
		cout << _name << "�� ����Ѵ�." << endl;
	}

	void Info() {
		cout << "���͸�: " << _name << endl;
		cout << "�����: " << _health << endl;
		cout << "���ݷ�: " << _attack << endl;
		cout << "����: " << _defense << endl << endl;
	}
};

// ��ü �迭
int main() {
	// ���� �迭 ����
	int count = 0;
	char buff[30];

	cout << "���� ������ �������� �Է��ϼ���: ";
	cin >> count;

	Monster** ppMonsterArray = new Monster* [count];

	for (int i = 0; i < count; i++) {
		sprintf(buff, "DynamicArray_%d", i);
		ppMonsterArray[i] = new Monster(buff, i * 10, i * 3, i * 2);
		// ���ڸ� �޴� �����ڸ� ȣ���Ͽ� ���� ��ü ����
	}

	cout << "���͵� Attack" << endl;
	for (int i = 0; i < count; i++) {
		ppMonsterArray[i]->Info();
	}

	// ������ ������ü �ݳ�ó��
	for (int i = 0; i < count; i++) {
		delete ppMonsterArray[i];
	}

	delete[] ppMonsterArray; // �����迭 �ݳ�ó��

	return 0;
}