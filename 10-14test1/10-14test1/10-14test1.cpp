#include <stdio.h>


int main()
{


	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int* pend = arr + 9;
	while (p<=pend)
	{
		printf("%d\n",*p++);
	}


	return 0;
}