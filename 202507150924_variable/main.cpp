#include <iostream>

using namespace std;

int global = 0;    // �ܺκ���, ��������

void func(int c) { // �Ű�����(parameter) : ���ú���, �ڵ�����
	int a;   // ���ú���, �ڵ�����


	static int astatic = 20;   // ���ú���, ��������
}


class A {
private:
	int _member;    // �������
};

int main() {
	int b = 20;


	return 0;
}