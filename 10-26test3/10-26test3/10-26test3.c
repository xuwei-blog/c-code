#include <stdio.h>
#include <math.h> 
                          //求自幂数  (水仙花数的超集)  153 =1^3 + 5^3 + 3^3

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//求位数n
		//int n = 0;
		int n = 0;
		int tmp = i;
		while (tmp)
		{
			n++;
			tmp = tmp / 10;
			
		}
		//求每个位数的n次方的和
		tmp = i;
		int sum = 0;
		int ret = 0;
		while (tmp)
		{
			
			sum += pow(tmp % 10, n);
			tmp = tmp / 10;
		}
		//判断
		if (sum == i)
		{
			printf("%d ",i);
		}
	}
	return 0;
}