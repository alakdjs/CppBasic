#include <iostream>
#include <string>

using namespace std;

// 실습
// 집에 있는 전자제품 3종류의 클래스를 각각 만들고
// 각 클래스 타입의 객체 생성한 후에 객체에 값을 저장하고 
// 객체의 값을 출력해보세요.

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
			cout << _modelName << "이(가) 스마트기기에 연결되었습니다." << endl;
		}
		else
			cout << _modelName << "는(은) 이미 스마트기기에 연결되어있습니다." << endl;
	}

	void Info() {
		cout << "모델명: " << _modelName << endl;
		cout << "브랜드: " << _brand << endl;
		cout << "가격: " << _price << endl << endl;
		cout << "연결 여부: " << (_smartConnected ? "yes" : "no") << endl;
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
			cout << _modelName << "이(가) 스마트기기에 연결되었습니다." << endl;
		}
		else
			cout << _modelName << "는(은) 이미 스마트기기에 연결되어있습니다." << endl;
	}

	void Info() {
		cout << "모델명: " << _modelName << endl;
		cout << "브랜드: " << _brand << endl;
		cout << "크기: " << _size << endl << endl;
		cout << "연결 여부: " << (_smartConnected ? "yes" : "no") << endl;
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
		cout << "모델명: " << _modelName << endl;
		cout << "브랜드: " << _brand << endl;
		cout << "용량: " << _capacity << "kg" << endl;
		cout << "연결 여부: " << (_smartConnected ? "yes" : "no") << endl;
	}

	void connect() {
		if (!_smartConnected) {
			_smartConnected = true;
			cout << _modelName << "이(가) 스마트기기에 연결되었습니다." << endl;
		}
		else
			cout << _modelName << "는(은) 이미 스마트기기에 연결되어있습니다." << endl;
	}
};


int main() {
	GameConsole nintendoSwitch("NintendoSwitch2", "Nintendo", 688000, false);
	TV samsungTV("삼성티비", "Sansung", 1500000, true);
	WashingMachine washerLG("LG드럼세탁기", "LG", 30, false);

	cout << "스마트 연결 여부" << endl << endl;
	nintendoSwitch.connect();
	cout << endl;
	samsungTV.connect();
	cout << endl;
	washerLG.connect();

	cout << "제품 정보" << endl << endl;
	nintendoSwitch.Info();
	cout << endl;
	samsungTV.Info();
	cout << endl;
	washerLG.Info();

	return 0;
}