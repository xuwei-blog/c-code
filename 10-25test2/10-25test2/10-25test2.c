#include <stdio.h>

int main()                    //指针类型影响指针运算
{
	int arr[10];

	int* p1 = arr;   //首元素地址

	int(*p2)[10] = &arr;  //数组的地址
	 
	printf("%p\n",p1);
	printf("%p\n",p1+1);    //下一个元素
	printf("%p\n",p2);
	printf("%p\n",p2+1);    //下一个数组

	return 0;
}