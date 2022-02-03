#include <iostream>



typedef struct BTNode
{
	BTNode* rChild;
	BTNode* lChild;
};
#define maxSize 100
void inorderNonrecursion(BTNode* bt)
{
	if (bt != NULL)
	{
		BTNode* stack[maxSize];
		int top = -1;
		BTNode* p = NULL;
		p = bt;
		while (top != -1 || p != NULL)
		{
			while (p != NULL)
			{
				stack[++top] = p;
				p = p->lChild;
			}
			if (top != -1)
			{
				p = stack[top--];
				//visit(p);    ¼ÇÂ¼ÖÐÐò
				p = p->rChild;
			}
		}
	}
}