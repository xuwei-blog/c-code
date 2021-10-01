#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int fib(int n)
{

	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}


int main()
{
	int n = 0;
	printf("fib\n");
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d",ret);
	return 0;
}