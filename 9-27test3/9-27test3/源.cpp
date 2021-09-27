#include <stdio.h>

void Swap(int* pa, int* pb)
{

	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}


int main()
{


	int a = 10;
	int b = 20;
	printf("交换前:>%d  %d\n", a, b);
	Swap(&a, &b);                         //如果导入参数a , b 会开辟新空间
	printf("交换后:>%d  %d\n", a, b);
	return 0;
}