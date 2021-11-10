#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	
	int arr1[20] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[20] = { 0 };

	memcpy(arr2,arr1,20);


	return 0;
}