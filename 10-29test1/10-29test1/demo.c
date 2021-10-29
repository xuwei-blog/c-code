#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Add(int a, int b)
{
	return a + b;
}

int main()
{

	int (*pf)(int,int) = &Add;
	//&Add  ==  Add
	//*pf == pf



	//int ret = (*pf)(3, 5);
	//int ret = pf(3, 5);
	int ret = Add(3, 5);
	



	printf("%d ",ret);


	return 0;
}