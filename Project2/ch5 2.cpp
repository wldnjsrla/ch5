#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	float kg, pound;
	printf("������ ����(kg)�� �Է��ϼ���: ");
	scanf("%f", &kg);
	pound = 0.453592 / kg;
	printf("%.3fkg�� %.3fpound �Դϴ�.\n", kg, pound);

	return 0;
}
