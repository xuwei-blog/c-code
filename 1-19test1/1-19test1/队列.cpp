//顺序表队列

int main()
{
	int queue[10];
	int front = 0;
	int rear = 0;
	int x;

	//入队 绕圈
	rear = (rear + 1) % 10;
	queue[rear] = x;
	//出队 绕圈
	front = (front + 1) % 10;
	x = queue[front];

	//判空
	if(front == rear) //队空
	
	if (front == (rear+1)%10) //队满

	return 0;
}