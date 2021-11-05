#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	
	int a[5] = { 1,2,3,4,5 };
	int* ptr = (int*)(&a + 1);
	printf("%d %d",*(a+1),*(ptr-1));
					//2      //5
	               //第一个元素+1 为第二个元素 
	               //ptr指向元素5后面   类型转换之前为int* [5]  int*类型-1把指针指向5前面   
	return 0;
}