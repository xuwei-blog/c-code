#include <stdio.h>


//int my_count(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}


//优化算法  同时兼顾 正负数
int my_count1(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}

int my_count2(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}


int main()
{
	int n = 15;
	printf("%d\n", my_count1(n));
	printf("%d\n", my_count2(n));


	return 0;
}