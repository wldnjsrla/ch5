#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
	float input1, input2, result;
	int op;
	printf("�� �Ǽ� �Է�: ");
	scanf("%f%f", &input1, &input2);
	printf("�������� ��ȣ���� 1<+>, 2<->, 3<*>, 4</>: ");
	scanf("%d", &op);

	switch (op) {
	case 1:
		result = input1 + input2;
		printf("%f + %f = %f\n", input1, input2, result);
		break;
	case 2:
		result = input1 - input2;
		printf("%f - %f = %f\n", input1, input2, result);
		break;
	case 3:
		result = input1 * input2;
		printf("%f * %f = %f\n", input1, input2, result);
		break;
	case 4:
		result = input1 / input2;
		printf("%f / %f = %f\n", input1, input2, result);
		break;
	default:
		printf("��ȣ�� �߸� �����߽��ϴ�.\n");
		break;
	}
	return 0;
}