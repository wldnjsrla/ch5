#include <stdio.h>

int main(void)
{
	int value;
	printf("0~360 ������ ���� �Է��մϴ� : ");
	scanf_s("%d", &value, sizeof(int));

	if (value == 360 || value == 0) {
		printf(" ���� X�� \n\n");
	}
	else if (value < 90) {
		printf(" 1��и� \n\n");
	}
	else if (value == 90) {
		printf(" ���� Y�� \n\n");
	}
	else if (value < 180) {
		printf(" 2��и� \n\n");
	}
	else if (value == 180) {
		printf(" ���� X�� \n\n");
	}
	else if (value < 270) {
		printf(" 3��и� \n\n");
	}
	else if (value == 270) {
		printf(" ���� Y�� \n\n");
	}
	else if (value > 270 && value < 360) {
		printf(" 4��и� \n\n");
	}
	else {
		printf("������ ����� ���Դϴ�. (����) \n\n");
	}

	return 0;
}