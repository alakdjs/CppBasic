#include <iostream>

using namespace std;

// ���迬����
// <, >, <=, >=, ==, !=
int main() {
	int value1 = 0;
	int value2 = 0;

	cout << "ó�� ���� �Է��ϼ���: ";
	cin >> value1; // cin ��ü�� Ű���忡�� ���� �Է¹����� ���
	cout << "�ι�° ���� �Է��ϼ���: ";
	cin >> value2;

	bool ret = value1 < value2;
	cout << value1 << " < " << value2 << " = " << ret << endl;

	ret = value1 > value2;
	cout << value1 << " > " << value2 << " = " << ret << endl;

	ret = value1 <= value2;
	cout << value1 << " <= " << value2 << " = " << ret << endl;

	ret = value1 >= value2;
	cout << value1 << " >= " << value2 << " = " << ret << endl;

	ret = value1 == value2;
	cout << value1 << " == " << value2 << " = " << ret << endl;

	ret = value1 != value2;
	cout << value1 << " != " << value2 << " = " << ret << endl;

	return 0;
}