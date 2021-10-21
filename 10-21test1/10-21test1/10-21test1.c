#include <stdio.h>


int main()
{
	int i = 0;                                    //内存由低到高存储 先在内存的高地址存储变量i 
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };       //存储数组
	for (i = 0; i <= 12; i++)                     
	{

		arr[i] = 0;                               //arr[10或者11] 把i的值变成0  程序死循环
		printf("hehe\n");     
	}



	return 0; 
}