#include <iostream>

using namespace std;

int main() {
	// 아래 만들어진 변수에 각 변수의 데이타 타입의
	// 경계값을 입력하시고 출력해보세요..
	// 
	// 정수형
	short a;
	long b;
	int c;

	unsigned short d;
	unsigned long e;
	unsigned int f;

	// 실수형
	float g;
	double h;

	// 문자형
	char i;
	unsigned char j;

	a = -32768;
	cout << "a = " << a << endl;

	b = -2147483647 - 1;
	cout << "b = " << b << endl;

	// 출력 printf 함수 사용
	// 형식 지정문자열
	int ab = 20;
	int cb = 30;
	// %d 부호있는 정수형 출력
	cout << "ab = " << ab << ", cb = " << cb << endl;
	//printf("ab = %d, cb = %d\n", ab, cb);

	float dd = 1.3f;
	double ee = 3.4;
	// %f(float), %lf(double)
	//printf("dd = %f, ee = %lf\n", dd, ee);
	cout << "dd = " << dd << ", ee = " << ee << endl;

	// 문자형
	char AA = 65;
	unsigned char BB = 66;
	//printf("AA = %c, BB = %c\n", AA, BB);
	cout << "AA = " << AA << ", BB = " << BB << endl;


	return 0;
}