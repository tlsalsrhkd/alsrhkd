#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0;
	printf("4자리 정수를 입력하세요:");
	scanf("%d", &a);
	printf("%10d\n", a);
	printf("%010d\n", a);
	printf("%+010d\n", a);
	printf("%d\n", a);
	printf("%10o\n", a);
	printf("%010o\n", a);
	printf("%10x\n", a);
	printf("%#010x\n", a);





}
