#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x + y;
}
int main()
{
	int(*pf1)(int, int) = Add;
	int(*pf2)(int, int) = Sub;
	int(*pfArr[2])(int, int) = { Add,Sub }; //函数指针数组


	return 0;
}