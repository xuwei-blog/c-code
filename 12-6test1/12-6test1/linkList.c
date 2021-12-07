#include "linkList.h"
//初始化链表
struct LinkNode* initLinkList()
{
	//创建头节点
	struct LinkNode* pHeader = malloc(sizeof(struct LinkNode));         //开辟pheader堆空间
	if (pHeader == NULL)                                                //开辟不成功返回NULL
	{
		return NULL;
	}
	//初始化头节点
	//pHeader->num = -1;  //头节点 不维护数据域
	pHeader->next = NULL;                                               //初始化头节点的next
	//记录尾节点位置，方便插入新的数据
	struct LinkNode* pTail = pHeader;                                    //尾节点被浅拷贝成头节点 逐字节拷贝 此时拥有pheader的next=NULL
	int val = -1;
	while (1)
	{
		//让用户初始化几个节点，如果用户输入的是-1，代表插入结束
		printf("请初始化链表，如果输入-1代表结束\n");
		scanf("%d", &val);
		if (val == -1)
		{
			break;
		}
		//如果输入不是-1  插入节点到链表中
		struct LinkNode* newNode = malloc(sizeof(struct LinkNode));      //开辟newnode节点 并初始化
		newNode->num = val;
		newNode->next = NULL;          
		//更改指针的指向
		pTail->next = newNode;                                           //尾节点第一次循环改变pheader->newnode
		//更新新的尾节点的指向
		pTail = newNode;                                                 //ptail初始化
	}
	return pHeader;
}

//遍历链表
void foreach_LinkList(struct LinkNode* pHeader)
{
	if (pHeader == NULL)
	{
		return;
	}

	struct LinkNode* pCurrent = pHeader->next; //指定第一个有真实数据的节点

	while (pCurrent != NULL)
	{
		printf("%d\n", pCurrent->num);
		pCurrent = pCurrent->next;
	}

}

//插入链表
void insert_LinkList(struct LinkNode* pHeader, int oldVal, int newVal)
{
	if (pHeader == NULL)
	{
		return;
	}

	//创建两个临时的节点
	struct LinkNode* pPrve = pHeader;
	struct LinkNode* pCurrent = pHeader->next;

	while (pCurrent != NULL)
	{
		if (pCurrent->num == oldVal)
		{
			break;
		}
		//如果没找到对应的位置,辅助指针向后移动
		pPrve = pCurrent;
		pCurrent = pCurrent->next;
	}

	//创建新节点
	struct LinkNode* newNode = malloc(sizeof(struct LinkNode));
	newNode->num = newVal;
	newNode->next = NULL;


	//建立关系
	newNode->next = pCurrent;
	pPrve->next = newNode;


}


//删除链表
void delete_LinkList(struct LinkNode* pHeader, int val)
{
	if (pHeader == NULL)
	{
		return;
	}

	//创建两个辅助指针变量
	struct LinkNode* pPrev = pHeader;
	struct LinkNode* pCurrent = pHeader->next;

	while (pCurrent != NULL)
	{
		if (pCurrent->num == val)
		{
			break;
		}
		//没有找到数据，辅助指针向后移动
		pPrev = pCurrent;
		pCurrent = pCurrent->next;
	}

	if (pCurrent == NULL) //没有找到用户要删除的数据
	{
		return;
	}

	//更改指针的指向进行删除
	pPrev->next = pCurrent->next;

	//删除掉待删除的节点
	free(pCurrent);
	pCurrent = NULL;

}


//清空链表
void clear_LinkList(struct LinkNode* pHeader)
{
	if (pHeader == NULL)
	{
		return;
	}

	struct LinkNode* pCurrent = pHeader->next;

	while (pCurrent != NULL)
	{
		//先保存住下一个节点的位置
		struct LinkNode* nextNode = pCurrent->next;

		free(pCurrent);

		pCurrent = nextNode;
	}

	pHeader->next = NULL;

}

//销毁链表
void destroy_LinkList(struct LinkNode* pHeader)
{

	if (pHeader == NULL)
	{
		return;
	}

	//先清空链表
	clear_LinkList(pHeader);

	//再释放头节点

	free(pHeader);
	pHeader = NULL;

}