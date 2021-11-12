#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>   //offsetof的头文件
#pragma pack(2)   //将默认对齐数改为2  默认是8
struct S
{
	char a;
	int b;
	char c;
};
#pragma pack()   //将默认对齐数默认
int main()
{
	
	printf("%d\n",sizeof(struct S));      //8
	printf("%d\n",offsetof(struct S,a));  //0
	printf("%d\n",offsetof(struct S,b));  //2
	printf("%d\n",offsetof(struct S,c));  //6

	return 0;
}