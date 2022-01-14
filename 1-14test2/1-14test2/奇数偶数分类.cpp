#include <iostream>
using namespace std;

typedef struct LNode
{
	int data;
	struct LNode* next;

}LNode;

void split(LNode* A, LNode* B)
{
	LNode* p, * q, * r;
	B = (LNode*)malloc(sizeof(LNode));
	B->next = NULL;
	r = B;
	p = A;
	while (p->next != NULL)
	{
		if (p->next->data % 2 == 0)
		{
			q = p->next;
			p->next = q->next;
			q->next = NULL;
			r->next = q;
			r = q;
		}
		else
		{
			p = p->next;
		}
	}
}

