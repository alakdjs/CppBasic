#include <stdio.h>

// switch-case �� (���ù�)
// �������� ��ȭ�� ���� �б� ó���� ��.

// 0:TV On, 1: TV Off, 2: Volume Up, 3: Volume Down
// 4: Channel Up, 5: Channel Down

// ������
enum ControlNum {
	TVON,
	TVOFF,
	VOLUMEUP,
	VOLUMEDOWN,
	CHANNELUP,
	CHANNELDOWN
};

int main() {
	int buttonNum = 0; // ��ư ��ȣ �Է�

	printf("��Ʈ�� ��ȣ�� �Է��ϼ���: ");
	scanf_s("%d", &buttonNum);

	switch (buttonNum) {

	case TVON:
		printf("TV On\n");
		break;

	case TVOFF:
		printf("TV Off\n");
		break;

	case VOLUMEUP:
		printf("Volume Up\n");
		break;

	case VOLUMEDOWN:
		printf("Volume Down\n");
		break;

	case CHANNELUP:
		printf("Channel Up\n");
		break;

	case CHANNELDOWN:
		printf("Channel Down\n");
		break;

	default: // ���� ����
		printf("Wrong Number\n");
		break;
	}


	if (buttonNum == TVON) {

	}
	else if (buttonNum == TVOFF) {

	}

	return 0;
}