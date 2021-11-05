#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a[3][4] = { 0 };

	printf("%d\n",sizeof(a));       //4*12=48 
	printf("%d\n",sizeof(a[0][0])); //4       第一行第一个元素
	printf("%d\n",sizeof(a[0]));    //单独放在sizeof内部 表示整个a[0] 
	printf("%d\n",sizeof(a[0]+1));  //       4  第一行第二个元素 a[0]没有单独放在sizeof内部 表示a[0]第一行的第一个元素 
	printf("%d\n",sizeof(*(a[0]+1))); //     4  第一行第二个元素
	printf("%d\n",sizeof(a+1));      //4/8    第二行地址
	printf("%d\n",sizeof(*(a+1)));   //16     第二行
	printf("%d\n",sizeof(&a[0]+1));  //4/8   第二行地址
	printf("%d\n",sizeof(*(&a[0]+1))); //16   第二行
	printf("%d\n",sizeof(*a));         //16   第一行
	printf("%d\n",sizeof(a[3]));       //16    第四行
	

	return 0;
}