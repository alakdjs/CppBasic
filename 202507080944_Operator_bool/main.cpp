#include <iostream>

using namespace std;

int main() {
	bool TRUE = -2000;
	bool FALSE = 0;

	cout << "�� &&(And) ������ \n";
	bool ret = TRUE && TRUE;
	cout << "TRUE && TRUE = " << ret << endl; // endl�� �ٹٲ�

	ret = TRUE && FALSE;
	cout << "TRUE && FALSE = " << ret << endl;

	ret = FALSE && TRUE;
	cout << "FALSE && TRUE = " << ret << endl;

	ret = FALSE && FALSE;
	cout << "FALSE && FALSE = " << ret << endl;

	cout << "\n�� ||(OR) ������ \n";
	ret = TRUE || TRUE;
	cout << "TRUE || TRUE = " << ret << endl;

	ret = TRUE || FALSE;
	cout << "TRUE || FALSE = " << ret << endl;

	ret = FALSE || TRUE;
	cout << "FALSE || TRUE = " << ret << endl;

	ret = FALSE || FALSE;
	cout << "FALSE || FALSE = " << ret << endl;

	cout << "\n�� !(not)������\n";
	ret = !TRUE;
	cout << "!TRUE = " << ret << endl;

	ret = !FALSE;
	cout << "!FALSE = " << ret << endl;

	return 0;
}