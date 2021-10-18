#include <stdio.h>

void my_isint(int n)
{
	if ((n & (n - 1)) == 0)
	{
		printf("yes");
	}
	else
	{
		printf("no");

	}
}

int main()
{
	int n = 8;
	my_isint(n);
	return 0;
}