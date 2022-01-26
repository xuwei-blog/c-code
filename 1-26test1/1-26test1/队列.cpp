//非正常配置元素个数计算
#define maxSize 100
typedef struct queue
{
	int data;
	int rear;
	int front;
};
int main()
{
	int n;
	struct queue q;
	n = q.rear - q.front + 1 + maxSize;
	return 0;
}
