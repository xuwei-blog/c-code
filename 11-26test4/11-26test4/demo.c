#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(int argc,char * argv[])
{
	for (size_t i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n",i,argv[i]);
	}
	return 0;
}