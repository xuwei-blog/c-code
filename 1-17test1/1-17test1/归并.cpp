#include <iostream>
using namespace std;
//顺序表的归并

void mergearray(int a[], int m, int b[], int n, int c[])
{
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < m && j < n)
	{
		if (a[i] < b[j])
		{
			c[k++] = a[i++];
		}
		else
		{
			c[k++] = b[j++];
		}
	}
	while (i < m)
	{
		c[k++] = a[i++];
	}
	while (j < n)
	{
		c[k++] = b[j++];
	}
}

//链表归并

typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode;

void merge(LNode* A, LNode* B, LNode*& C)
{
	LNode* p = A->next;
	LNode* q = B->next;
	LNode* r;
	C = A;
	C->next = NULL;
	free(B);
	r = C;
	while (p != NULL && q != NULL)
	{
		if (p->data <= q->data)
		{
			r->next = p;
			p = p->next;
			r = r->next;
		}
		else
		{
			r->next = q;
			q = q->next;
			r = r->next;
		}
	}
	if (p != NULL)
	{
		r->next = p;
	}
	if (q != NULL)
	{
		r->next = q;
	}

}