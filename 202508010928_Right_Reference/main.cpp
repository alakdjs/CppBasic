#include <iostream>

using namespace std;

int main() {
	int value = 0;

	value = 100 + 200;

	// 임시적으로 만들어졌다 없어지는 값을 잡아놓는 용도로 사용.
	int&& rrefa = 100; // 우측값 참조
	int&& rrefb = 200; // 우측값 참조

	cout << "refa = " << rrefa << endl;
	cout << "refb = " << rrefb << endl;

	rrefa = 400;
	cout << endl;
	cout << "refa = " << rrefa << endl;
	cout << "refb = " << rrefb << endl;

	int a = 100;

	int& refaa = a;

	rrefa = 200;

	
	return 0;
}