#include <iostream>

using namespace std;

int global = 0;    // 외부변수, 전역변수

void func(int c) { // 매개변수(parameter) : 로컬변수, 자동변수
	int a;   // 로컬변수, 자동변수


	static int astatic = 20;   // 로컬변수, 정적변수
}


class A {
private:
	int _member;    // 멤버변수
};

int main() {
	int b = 20;


	return 0;
}