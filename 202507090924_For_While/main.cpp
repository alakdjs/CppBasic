#include <iostream>

using namespace std;

// �ݺ��� 
// Ư���� ��ɵ��� �ݺ������� ������ �� ���
// for, while, do-while(���� ����)

int main() {
	// for (�ʱ��; ���ǽ�; ������){
	//		��ɾ��;
	// }

	// �ݺ�Ƚ���� �ƴ� ��쿡 ����ϱ� ���� ����
	cout << "���� for��" << endl;
	for (int i = 0; i < 10; i += 2) {
		cout << "i = " << i << endl;
	}

	cout << endl;
	cout << "���� for��" << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10;j++) {
			cout << "i = " << i << ", j = " << j << endl;
		}
	}

	/*	������ ����
   int a = 0;
   for (; a < 10;) {
   }
   */

	cout << "while ��" << endl;
	// �ݺ� Ƚ���� ������ 
	// while ���� ���ǽ� �κ��� �����ϴ� ���ȿ���
	// �󸶵��� ��ɾ �ݺ��ص� �Ǵ� ���
	int loopCount = 0;

	cout << "�������� �Է��ϼ���: ";
	cin >> loopCount;

	while (loopCount > 0) {
		loopCount -= 10;
		cout << "loopCount = " << loopCount << endl;
	}

	cout << "do - while" << endl;
	cout << "�������� �Է��ϼ���: ";
	cin >> loopCount;

	do {
		loopCount -= 10;

		cout << "loopCount = " << loopCount << endl;
	} while (loopCount > 0);

	return 0;
}