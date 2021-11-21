#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define SWAP(X) ((X & 0xaaaaaaaa) >> 1) + ((X & 0x55555555) << 1)
int main()
{
	int num = 10;
	int ret = ((num & 0xaaaaaaaa) >> 1) + ((num & 0x55555555) << 1);
	int a = SWAP(num);

	printf("%d\n", ret);
	printf("%d\n", a);


	return 0;
}