#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Find(int arr[], int sz)
{
	//1.把所有数字异或
	int i = 0;
	int ret = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	//2.计算ret哪一位为1
	//ret = 3
	//011
	int pos = 0;
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	//把从低位向高位的第pos位为1 ， 为0的放在另一个分组
	int num1 = 0;
	int num2 = 0;
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			num1 ^= arr[i];
		}
		else
		{
			num2 ^= arr[i];
		}
	}
	printf("%d %d\n", num1, num2);
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Find(arr, sz);
	return 0;
}