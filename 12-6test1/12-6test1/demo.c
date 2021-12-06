#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "linkList.h"

void test01()
{
	//初始化链表
	struct LinkNode* pHeader = initLinkList();

	//遍历链表
	printf("遍历链表结果为：\n");
	foreach_LinkList(pHeader);

	//插入链表
	// 10 1000  2000 20 3000 30  500
	insert_LinkList(pHeader, 20, 1000);
	insert_LinkList(pHeader, 20, 2000);
	insert_LinkList(pHeader, -1, 500);
	insert_LinkList(pHeader, 30, 3000);
	printf("插入链表后，遍历链表结果为：\n");
	foreach_LinkList(pHeader);


	//删除链表
	// 10  20  30  500
	delete_LinkList(pHeader, 2000);
	delete_LinkList(pHeader, 3000);
	delete_LinkList(pHeader, 1000);
	delete_LinkList(pHeader, -1);
	printf("删除链表后，遍历链表结果为：\n");
	foreach_LinkList(pHeader);

	//清空链表
	clear_LinkList(pHeader);
	printf("清空链表后，遍历链表结果为：\n");
	insert_LinkList(pHeader, 111, 111);
	insert_LinkList(pHeader, 222, 222);
	insert_LinkList(pHeader, 333, 333);
	foreach_LinkList(pHeader);

	//销毁链表
	destroy_LinkList(pHeader);
	pHeader = NULL;

}

int main() {

	test01();

	//printf("%d\n", test01);

	system("pause");
	return EXIT_SUCCESS;
}