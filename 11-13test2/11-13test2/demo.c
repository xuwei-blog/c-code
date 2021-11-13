#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


union Un
{
	short a[5];  // 2  10
	int b;   //4
};

int main()
{
	union Un u;
	printf("%d ",sizeof(u));


	return 0;
}