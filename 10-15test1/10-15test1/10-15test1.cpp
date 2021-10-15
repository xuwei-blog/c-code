#include <stdio.h>


int main()
{

	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}

	for (i = 0; i < 10; i++)
	{
		
		printf("%p <===> %p\n",&arr[i],p+i);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{

		printf("%p <===> %d\n", &arr[i], *(p + i));
	}
	return 0;
}