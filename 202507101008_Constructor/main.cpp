#include <iostream>
#include <string>

using namespace std;

class SoccerSon {
private:
    string name; // 이름
    float speed;   // 100미터 달리기
    float weight;   // 몸무게
    float height;   // 신장
    string skill;   // 주요스킬

public:
    // 생성자는 반드시 필요합니다.
    // 생성자를 만들지 않으면 컴파일러 자동으로 기본 생성자를 만들어서
    // 넣어줍니다.
    // 기본 생성자는 인자를 받지 않는 생성자입니다.
    // 생성자는 멤버변수의 초기화나 객체를 만들때 선행되어야 하는 작업들을 생성자에서 처리합니다.
    SoccerSon() {   // 기본생성자
        cout << "SoccerSon 기본생성자" << endl;
        name = "없음";
        speed = 0.0f;
        weight = 0.0f;
        height = 0.0f;
        skill = "없음";
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
        cout << "이름: " << name << endl;
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

    SoccerSon player2;

    player2.Info();


    return 0;
}