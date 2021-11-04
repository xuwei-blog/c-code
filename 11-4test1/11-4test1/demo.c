#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n",strlen(arr));     //随机值 找到/0才停下
	printf("%d\n",strlen(arr+0));   //随机值 找到/0才停下
	printf("%d\n",strlen(*arr));    //err 把a传入 但strlen接收的是char* 类型  会得到地址  0x 00 00 00 61
	printf("%d\n",strlen(arr[1]));  //err
	printf("%d\n",strlen(&arr));    //随机值
	printf("%d\n",strlen(&arr+1));  //随机值-6
	printf("%d\n",strlen(&arr[0]+1));   //随机值-1
	return 0;
}