#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;    //函数返回值不是0!!!!
}
int main()
{

	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1,&num2);
	//int sum = num1 + num2;   // 这个不是函数的方式

	int sum = Add(num1, num2);

	printf("%d", sum);

	return 0;
}
