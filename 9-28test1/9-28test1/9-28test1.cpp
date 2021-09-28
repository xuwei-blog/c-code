#include <stdio.h>

int is_prime(int a)
{
	int j = 0;
	for (j = 2; j < a; j++)
	{
		if (a % j == 0)
			return 0;
	}
	return 1;
}


int main()
{

	int a = 0;
	int m = 0;
	for (a = 100; a <=200; a++)
		if (is_prime(a) == 1)
		{
			m++;
			printf("%d ", a);

		}
	printf("\ncount=%d", m);
	return 0;
}