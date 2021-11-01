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

int Calc(int(*pf)(int, int))
{
	int x;
	int y;
	scanf("%d %d", &x, &y);
	return pf(x, y);
}

int main()
{
	int(*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
	int x = 0;
	int y = 0;
	int input = 0;
	int ret = 0;
	do
	{
		printf("0>退出\n1>加法\n2>减法\n3>乘法\n4>除法\n");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{

		}

		switch (input)
		{
		case 1:
			ret = Calc(Add);
			printf("%d\n",ret);
			break;
		case 2:
			ret = Calc(Sub);
			printf("%d\n", ret);

			break;
		case 3:
			ret = Calc(Mul);
			printf("%d\n", ret);

			break;
		case 4:
			ret = Calc(Div);
			printf("%d\n", ret);
			break;
		
		}
	} while(input);
	
	
	
	return 0;
}