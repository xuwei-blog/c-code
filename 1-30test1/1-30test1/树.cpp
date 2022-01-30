//树的存储结构--顺序表

typedef struct
{
	int data;
	int pIdx;
}TNode;

#define maxSize 100
int main()
{
	TNode tree[maxSize];
	tree[0].data = 1;
	tree[0].pIdx = -1; //-1 表示根结点
	tree[1].data = 2;
	tree[1].pIdx = 0;	 //0表示  父节点的下标
	tree[2].data = 3;
	tree[2].pIdx = 0;
	tree[3].data = 4;
	tree[3].pIdx = 0;
	tree[4].data = 5;
	tree[4].pIdx = 1;
	tree[5].data = 6;
	tree[5].pIdx = 1;
	return 0;
}


//链表版
typedef struct Branch
{
	int cIdx;
	Branch* next;
}Branch;

typedef struct
{
	int data;
	Branch* first;
}TNode;
