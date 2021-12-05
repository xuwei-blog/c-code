#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//动态链表
struct LinkNode
{
	int num; //数据域
	struct LinkNode* next;  //指针域
};

int main()
{
	//创建节点 开辟空间
	struct LinkNode *node1 = malloc(sizeof(struct LinkNode));
	struct LinkNode *node2 = malloc(sizeof(struct LinkNode));
	struct LinkNode *node3 = malloc(sizeof(struct LinkNode));
	struct LinkNode *node4 = malloc(sizeof(struct LinkNode));
	struct LinkNode *node5 = malloc(sizeof(struct LinkNode));

	//给数据域赋值
	node1->num = 10;
	node2->num = 20;
	node3->num = 30;
	node4->num = 40;
	node5->num = 50;

	//建立关系
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = NULL;

	//遍历链表
	struct LinkNode * pCurrent = node1;
	while (pCurrent != NULL)
	{
		printf("%d\n", pCurrent->num);
		pCurrent = pCurrent->next;
	}

	//释放
	free(node1);
	free(node2);
	free(node3);
	free(node4);
	free(node5);

	node1 = NULL;
	node2 = NULL;
	node3 = NULL;
	node4 = NULL;
	node5 = NULL;
	return 0;
}