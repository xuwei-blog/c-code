#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	
	int a = 1;
	int b = 5;
	
	int c = a || b + 1;
	printf("%d\n",c);
	printf("%d\n",b);
	
	return 0;
}