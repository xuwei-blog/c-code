#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


void print(int a)      //ตÝน้
{
	if (a > 9)
	{
		print(a / 10);    
	}
	printf("%d ", a % 10);


}
int main()
{

	int a = 0;
	scanf("%d", &a);
	print(a);
	return 0;
}