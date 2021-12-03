#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* p = calloc(10,sizeof(int)); //会初始化成0
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n",p[i]);
	}
	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
	printf("------------");
	int* pp = malloc(10*sizeof(int));
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", pp[i]);
	}
	if (p != NULL)
	{
		free(pp);
		pp = NULL;
	}

	return 0;
}