#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float x = 0;
	float y = 0;
	float z = 0;
	printf("�����µ��� �Է��Ͻÿ�:");
	scanf("%f %f %f", &x, &y, &z);
	printf("%f�� ȭ���µ��� %.4f�Դϴ�.\n", x, (9.0 / 5.0) * x + 32.0);
	printf("%f�� ȭ���µ��� %.4f�Դϴ�.\n", y, (9.0 / 5.0) * y + 32.0);
	printf("%f�� ȭ���µ��� %.4f�Դϴ�.\n", z, (9.0 / 5.0) * z + 32.0);

}
