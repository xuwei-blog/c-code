#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//从前往后找偶数
		while ((left<right) && arr[left] % 2 != 0)   //left <right 避免越界访问
		{
			left++;
		}
		//从后往前找奇数
		while ((left <right) &&  arr[right] % 2 != 1)
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[right];
			arr[right] = arr[left];
			arr[left] = tmp;
		}
		// 必须要加条件  因为2、7进去交换4和5   4.5 进去 交换5.4
		/*int tmp = arr[right];
		arr[right] = arr[left];
		arr[left] = tmp;*/
		
	}
}
	

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d",arr[i]);
	}
}


int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	print(arr,sz);


	return 0;
}