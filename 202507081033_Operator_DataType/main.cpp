#include <iostream>

using namespace std;

int main() {
	int a;
	int b = 30;
	float c = 3.4f;

	a = 20;

	// 기본 데이터 타입 간에는 컴파일러가 자동으로 형변환을 시켜버림
	// 묵시적 형변환
	a = c;

	// 실수값을 정수형 변수에 대입할 때는 명시적 형변환을 해야함
	a = (int)c;

	c = b; // 정수값을 실수형 변수에 대입할 때는 묵시적 형변환을 해도 됨


	// 축약형
	a += 1;
	// a = a + 1;

	a += b;
	// a = a + b;

	a /= b;
	// a = a / b;

	return 0;
}