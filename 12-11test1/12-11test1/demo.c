#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define INITSIZE 10
typedef struct
{
	int *data;
	int MaxSize;
	int length;
}SeqList;

void InitList(SeqList L)
{
	L.data = (int *)malloc(sizeof(SeqList) * INITSIZE);
	L.MaxSize = INITSIZE;
	L.length = 0;
}

void IncreaseSize(SeqList L, int len)
{
	int* p = L.data;
	L.data = (int*)malloc(sizeof(SeqList) * (INITSIZE+len));
	for (int i = 0; i < L.length; i++)
	{
		L.data[i] = p[i];
	}
	L.MaxSize += len;
	free(p);
}
int main()
{
	SeqList L;
	InitList(L);


	return 0;
}