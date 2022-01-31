//树的父子存储结构
typedef struct BTNode
{
	int data;
	struct BTNode* lChild;
	struct BTNode* rChild;
}BTNode;

//树的孩子兄弟结构
typedef struct BTNode
{
	int data;
	struct BTNode* child;
	struct BTNode* sibling;
}BTNode;
