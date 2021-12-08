#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//节点结构体
struct LinkNode
{
	struct LinkNode* next;
};

struct LList
{
	struct LinkNode pheader;
	int m_size;
};

typedef void* LinkList;

//初始化链表
LinkList InitList()
{
	struct LList* mylist = malloc(sizeof(struct LList));
	if (mylist == NULL)
	{
		return;
	}
	mylist->pheader.next = NULL;
	mylist->m_size = 0;
	return mylist;
}
int main()
{
	


	return 0;
}