


#include <stdio.h>

int get_max(int a, int b)
{
	int z = 0;
	if (a > b)
		z = a;
	else
		z = b;
	return z;
}





int main()
{


	int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("max = %d", max);
	return 0;
}