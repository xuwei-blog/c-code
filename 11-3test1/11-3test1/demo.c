#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//sizeof(数组名) - 数组名表示整个数组 - 计算整个数组的大小
//&数组名 - 数组名表示整个数组,取出的是整个数组的地址
//除此之外,所有的数组名都是数组首元素的地址
int main()
{
	int a[4] = { 1,2,3,4 };
	printf("%d\n",sizeof(a));  //16   4*4=16
	printf("%d\n",sizeof(a+1));//4/8  a+0是第一个元素的地址 sizeof(第一个元素的地址) x86为4  x64为8
	printf("%d\n",sizeof(*a)); //4  *a是数组的第一个元素   计算的是元素的大小
	printf("%d\n",sizeof(a+1));//4/8  a+1是第二个元素的地址
	printf("%d\n",sizeof(a[1]));//4   计算的是第二个元素的大小


	printf("\n");
	printf("%d\n",sizeof(&a));  //4/8     数组的地址也是地址 
	printf("%d\n",sizeof(*&a)); //16         解引用数组的地址 就是 数组    ,  & 和 *可以抵消
	printf("%d\n",sizeof(&a+1)); //4/8      跳过整个数组后 指针指向元素4后面的地址
	printf("%d\n",sizeof(&a[0])); //4/8   第一个元素的地址
	printf("%d\n",sizeof(&a[0] + 1));  //4/8   第二个元素的地址


	return 0;
}