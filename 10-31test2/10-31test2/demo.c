#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int(*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
	int x = 0;
	int y = 0;
	int input = 0;
	do
	{
		printf("0>退出\n1>加法\n2>减法\n3>乘法\n4>除法\n");
		scanf("%d", &input);
		scanf("%d %d", &x, &y);
		int ret = (pfArr[input])(x, y);
		printf("%d\n",ret);

	} while(input);
	
	return 0;
}