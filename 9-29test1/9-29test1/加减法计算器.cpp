#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "Add.h"

int main()
{

	int a = 0;
	int b = 0;
	printf("输入两个数字:>");
	scanf("%d %d", &a,&b);
	
	int r = Add(a, b);
	printf("结果为:>%d", r);
	return 0;
}