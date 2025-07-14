#include <iostream>
#include <string>

using namespace std;

// �ǽ�
// ���� �ִ� ������ǰ 3������ Ŭ������ ���� �����
// �� Ŭ���� Ÿ���� ��ü ������ �Ŀ� ��ü�� ���� �����ϰ� 
// ��ü�� ���� ����غ�����.

class GameConsole {
private:
	string _modelName;
	string _brand;
	int _price;
	bool _smartConnected;

public:
	GameConsole(string modelName, string brand, int price, bool smartConnected)
		: _modelName(modelName), _brand(brand), _price(price), _smartConnected(smartConnected) {
	}

	void connect() {
		if (!_smartConnected) {
			_smartConnected = true;
			cout << _modelName << "��(��) ����Ʈ��⿡ ����Ǿ����ϴ�." << endl;
		}
		else
			cout << _modelName << "��(��) �̹� ����Ʈ��⿡ ����Ǿ��ֽ��ϴ�." << endl;
	}

	void Info() {
		cout << "�𵨸�: " << _modelName << endl;
		cout << "�귣��: " << _brand << endl;
		cout << "����: " << _price << endl << endl;
		cout << "���� ����: " << (_smartConnected ? "yes" : "no") << endl;
	}
	
};

class TV {
private:
	string _modelName;
	string _brand;
	int _size;
	bool _smartConnected;

public:
	TV(string modelName, string brand, int size, bool smartConnected)
		: _modelName(modelName), _brand(brand), _size(size), _smartConnected(smartConnected) {
	}

	void connect() {
		if (!_smartConnected) {
			_smartConnected = true;
			cout << _modelName << "��(��) ����Ʈ��⿡ ����Ǿ����ϴ�." << endl;
		}
		else
			cout << _modelName << "��(��) �̹� ����Ʈ��⿡ ����Ǿ��ֽ��ϴ�." << endl;
	}

	void Info() {
		cout << "�𵨸�: " << _modelName << endl;
		cout << "�귣��: " << _brand << endl;
		cout << "ũ��: " << _size << endl << endl;
		cout << "���� ����: " << (_smartConnected ? "yes" : "no") << endl;
	}
};



class WashingMachine {
private:
	string _modelName;
	string _brand;
	int _capacity;
	bool _smartConnected;

public:
	WashingMachine(string modelName, string brand, int capacity, bool smartConnected)
		: _modelName(modelName), _brand(brand), _capacity(capacity), _smartConnected(smartConnected) {
	}

	void Info() {
		cout << "�𵨸�: " << _modelName << endl;
		cout << "�귣��: " << _brand << endl;
		cout << "�뷮: " << _capacity << "kg" << endl;
		cout << "���� ����: " << (_smartConnected ? "yes" : "no") << endl;
	}

	void connect() {
		if (!_smartConnected) {
			_smartConnected = true;
			cout << _modelName << "��(��) ����Ʈ��⿡ ����Ǿ����ϴ�." << endl;
		}
		else
			cout << _modelName << "��(��) �̹� ����Ʈ��⿡ ����Ǿ��ֽ��ϴ�." << endl;
	}
};


int main() {
	GameConsole nintendoSwitch("NintendoSwitch2", "Nintendo", 688000, false);
	TV samsungTV("�ＺƼ��", "Sansung", 1500000, true);
	WashingMachine washerLG("LG�巳��Ź��", "LG", 30, false);

	cout << "����Ʈ ���� ����" << endl << endl;
	nintendoSwitch.connect();
	cout << endl;
	samsungTV.connect();
	cout << endl;
	washerLG.connect();

	cout << "��ǰ ����" << endl << endl;
	nintendoSwitch.Info();
	cout << endl;
	samsungTV.Info();
	cout << endl;
	washerLG.Info();

	return 0;
}