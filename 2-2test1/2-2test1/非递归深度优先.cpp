typedef struct BTNode
{
	BTNode* rChild;
	BTNode* lChild;

};
void visit(BTNode* p)
{

}
#include <iostream>
#define maxSize 100
void preorderNonrecursion(BTNode* bt)
{
	if (bt != NULL)
	{
		BTNode* stack[maxSize]; //Õ»
		int top = -1;
		BTNode* p = NULL; //±éÀúÖ¸Õë
		stack[++top] = bt;
		while (top != -1)
		{
			p = stack[top--];
			visit(p);
			if (p->rChild != NULL)
			{
				stack[++top] = p->rChild;
			}
			if (p->lChild != NULL)
			{
				stack[++top] = p->lChild;
			}
		}

	}
}