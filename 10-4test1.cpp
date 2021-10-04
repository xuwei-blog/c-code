#include <stdio.h>



int main()
{
	int arr[10] = { 0 };
	int n = 0;
	for (n = 0; n < 10; n++)
	{
		printf("arr[%d]µØÖ·ÊÇ:>%p\n", n, &arr[n]);
	}
	return 0;
}