#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//静态链表
struct LinkNode
{
	int num; //数据域
	struct LinkNode* next;  //指针域
};

int main()
{
	//创建节点
	struct LinkNode node1 = { 10,NULL };
	struct LinkNode node2 = { 20,NULL };
	struct LinkNode node3 = { 30,NULL };
	struct LinkNode node4 = { 40,NULL };
	struct LinkNode node5 = { 50,NULL };

	printf("%d",node1.num);
	//建立关系
	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = &node5;

	//遍历链表
	struct LinkNode* pCurrent = &node1;
	while (pCurrent != NULL)
	{
		printf("%d\n",pCurrent->num);
		pCurrent = pCurrent->next;
	}
	return 0;
}