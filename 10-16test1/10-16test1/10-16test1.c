#include <stdio.h>


int main()
{
	int n = 3;
	int i = 1;
	int j = 1;
	int sum = 0;
	

	for (j = 1; j <= n; j++)
	{
		int ret = 1;
		for (i = 1; i <= j; i++)
		{
			ret *= i;

		}
		sum += ret;
		
	}
	printf("%d",sum);

	




	return 0;
}