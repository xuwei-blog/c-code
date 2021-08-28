#include <stdio.h>
int main()
{
	printf("%d", sizeof(char*));
	printf("%d", sizeof(short*));
	printf("%d", sizeof(int*));
	printf("%d", sizeof(long*));
	printf("%d", sizeof(long long*));
	printf("%d", sizeof(float*));
	printf("%d", sizeof(double*));

	return 0;
}