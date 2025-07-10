#include <iostream>
#include <string>

using namespace std;

//클래스 안에서 멤버 변수와 지역 변수 이름이 겹칠 수 있기 때문에, 구분을 위해 멤버 변수 앞에 _를 붙입니다.

class SoccerSon {
private:
    string _name; // 이름
    float _speed;   // 100미터 달리기
    float _weight;   // 몸무게
    float _height;   // 신장
    string _skill;   // 주요스킬

public:
    // 생성자는 반드시 필요합니다.
    // 생성자를 만들지 않으면 컴파일러 자동으로 기본 생성자를 만들어서
    // 넣어줍니다.
    // 기본 생성자는 인자를 받지 않는 생성자입니다.
    // 생성자는 멤버변수의 초기화나 객체를 만들때 선행되어야 하는 작업들을 생성자에서 처리합니다.
    SoccerSon() {   // 기본생성자
        cout << "SoccerSon 기본생성자" << endl;
        _name = "없음";
        _speed = 0.0f;
        _weight = 0.0f;
        _height = 0.0f;
        _skill = "없음";
    }

    SoccerSon(string name, float speed, float weight, float height, string skill) { // 인자를 받는 생성자
        cout << "인자를 5개 받는 생성자" << endl;
        _name = name;
        _speed = speed;
        _weight = weight;
        _height = height;
        _skill = skill;
    }


    SoccerSon(string name) {
        cout << "인자를 1개 받는 생성자" << endl;
        _name = name;
        _speed = 0.0f;
        _weight = 0.0f;
        _height = 0.0f;
        _skill = "없음";
    }

    // 객체가 소멸될때 호출되어지는 멤버함수를 소멸자 라고 함
    // 소멸자 객체가 소멸되지 전에 선행되어야 하는 작업을 소멸자에서 함
    ~SoccerSon() {
        cout << "SoccerSon 소멸자" << endl;
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
        cout << "이름: " << _name << endl;
        cout << "100미터 달리기: " << GetSpeed() << "sec" << endl;
        cout << "몸무게: " << GetWeight() << "kg" << endl;
        cout << "신장: " << GetHeight() << "cm" << endl;
        cout << "주요스킬: " << GetSkill() << endl;
    }

};



int main() {
    // 손흥민을 축구게임에서 필요한 데이타를 뽑으시고
    // 캡슐화해서 클래스형 데이타 타입을 만들고
    // 객체를 만들고 값을 저장한 후에 
    // 객체에 저장된 값을 출력해보세요..

    // 객체가 생성될때 자동으로 호출되어지는 멤버함수가 있습니다.
    // 객체가 생성될때 무조건 호출됩니다.
    // 이 멤버함수가 호출되어야지만 온전한 객체로 생성됩니다.
    // 이 멤버함수를 생성자(constructor)라고 합니다.
    SoccerSon player;

    player.SetName("손흥민");
    player.SetSpeed(10.3f);
    player.SetWeight(80.0f);
    player.SetHeight(182.0f);
    player.SetSkill("OverHeadKick");

    cout << "이름: " << player.GetName() << endl;
    cout << "100미터 달리기: " << player.GetSpeed() << "sec" << endl;
    cout << "몸무게: " << player.GetWeight() << "kg" << endl;
    cout << "신장: " << player.GetHeight() << "cm" << endl;
    cout << "주요스킬: " << player.GetSkill() << endl;

    cout << endl;

    SoccerSon player2;   // 기본생성자 호출되면서 객체 생성

    player2.Info();

    cout << endl;
    SoccerSon player3("손흥민3", 11.0f, 80.0f, 184.0f, "중거리슛"); // 인자를 5개 받는 생성자가 호출되면서 객체가 생성됩니다.

    player3.Info();

    cout << endl;
    SoccerSon player4("손흥민4"); // 인자를 1개 받는 생성자가 호출되면서 객체가 생성됩니다.

    player4.Info();


    return 0;
}