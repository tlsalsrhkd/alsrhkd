#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float x = 0;
	float y = 0;
	float z = 0;
	printf("섭씨온도를 입력하시오:");
	scanf("%f %f %f", &x, &y, &z);
	printf("%f의 화씨온도는 %.4f입니다.\n", x, (9.0 / 5.0) * x + 32.0);
	printf("%f의 화씨온도는 %.4f입니다.\n", y, (9.0 / 5.0) * y + 32.0);
	printf("%f의 화씨온도는 %.4f입니다.\n", z, (9.0 / 5.0) * z + 32.0);

}
