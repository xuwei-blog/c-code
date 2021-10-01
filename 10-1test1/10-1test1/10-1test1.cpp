#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int Fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}


int main()
{

	int n = 0;
	printf("ÇóxµÄ½×²ã:> x=");

	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d", ret);
	return 0;
}