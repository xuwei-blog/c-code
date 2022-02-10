void DFS(int v, AGraph* G)
{
	visit[v] = 1; //标记为 已经访问
	Visit(v);  //判断重复访问
	ArcNode* q = G->adjLIst[v].first;  //边
	while (q != NULL)
	{
		if (visit[q->adjV] == 0)
		{
			DFS(q->adjV, G); //递归
		}
		q = q->next;
	}
}