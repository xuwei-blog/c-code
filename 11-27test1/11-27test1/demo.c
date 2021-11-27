#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>

struct People
{
	char a;
	int b;
	char c[64];
	int d;
};
int main()
{
	printf("%d\n",offsetof(struct People,d));   //²é¿´Æ«ÒÆÁ¿
	printf("%d\n",&(((struct People*)0)->d)); 


	return 0;
}