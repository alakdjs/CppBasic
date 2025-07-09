#include <iostream>
#include <string>


using namespace std;

// 주소, 주민번호, 가족관계, 이름, 나이, 성별
// 캡슐화: 클래스 키워드로 데이터를 묶는 것
// 캡슐화를 통해서 클래스형 DataType Son

// class 클래스명 {
//    Datas;
// };
class Son {
public:
    string address; // 멤버변수
    string juminNum;
    string name;
    int age;
    bool sungbyul;
};


int main() {
    Son a; // 클래스형 DataType Son 변수 a를 만듦.

    // 클래스형 변수로 멤버에 접근할때 .(period)연산자를 사용합니다.

    a.address = "런던";
    a.juminNum = "1111111-1111111";
    a.name = "손흥민";
    a.age = 33;
    a.sungbyul = false;   // true: 여자, false: 남자


    cout << "주소: " << a.address << endl;
    cout << "주민번호: " << a.juminNum << endl;
    cout << "이름: " << a.name << endl;
    cout << "나이: " << a.age << endl;
    if (a.sungbyul) {
        cout << "성별: 여자" << endl;
    }
    else {
        cout << "성별: 남자" << endl;
    }

    return 0;
}