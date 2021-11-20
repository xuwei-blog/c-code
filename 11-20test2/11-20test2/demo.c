#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX(X,Y) ((X)>(Y))?(X):(Y)
int main()
{
	int a = 5;
	int b = 8;
	int m = MAX(a++,b++);
	printf("a = %d b = %d\n",a,b);   // a =6 b = 10
	
	printf("m = %d\n",m);  // m = 9



	return 0;
}