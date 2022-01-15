#include <iostream>
using namespace std;

//str1 和 str2 两条单链合并成一条


typedef struct LNode
{
	int data;
	struct LNode* next;
};

LNode* findFirstCommon(LNode* str1, LNode* str2)
{
	int len1 = 0;
	int len2 = 0;
	LNode* p = str1->next;
	LNode* q = str2->next;
	while (p != NULL)
	{
		len1++;
		p = p->next;
	}
	while (q != NULL)
	{
		len2++;
		q = q->next;
	}
	for (p = str1->next; len1 > len2; len1--)
	{
		p = p->next;
	}
	for (q = str2->next; len1 > len2; len2--)
	{
		q =q->next;
	}
	while (p != NULL && p != q)
	{
		p = p->next;
		q = q->next;
	}
	return p;
}