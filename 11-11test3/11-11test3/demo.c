#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct A
{
	char a;   //0   8-15   16-19    为了得8的倍数再+5
	double m;
	int i;
	
}A1;         //24

struct B
{
	char b;    // 0   8-31   32-35   为了得8的倍数再+5
	struct A A1;
	int c;
}B1;         //40

int main()
{
	struct B B1;
	printf("%d\n",sizeof(A1));  //24
	printf("%d",sizeof(B1));	//40


	return 0;
}