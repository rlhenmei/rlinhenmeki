 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int book[101], n, e[101][101],min=99999;
//void dfs(int cur, int dis)
//{
//	int i;
//	if (dis > min)
//		return;
//	if (cur == n)
//	{
//		if (dis < min)
//		{
//			min = dis;
//			return;
//		}
//	}
//	for (i = 1; i <= n; i++)
//	{
//		if (e[cur][i] != 99999 && book[i] == 0)
//		{
//			book[i] = 1;
//			dfs(i, dis + e[cur][i]);
//			book[i] = 0;
//		}
//	}
//	return;
//}
//int main()
//{
//	int m,i,j,a,b,c;
//	scanf("%d %d", &n, &m);
//	for (i = 1; i <= n; i++)
//		for (j = 1; j <= n; j++)
//		{
//			if (i == j)
//				e[i][j] = 0;
//			else
//				e[i][j] = 99999;
//		}
//	for (i = 1; i <= m; i++)
//	{
//		scanf("%d %d %d", &a, &b, &c);
//		e[a][b] = c;
//	}
//	book[1] = 1;
//	dfs(1, 0);
//	printf("%d", min);
//	return 0;
//}
//struct note {
//	int x;
//	int s;
//}que[2501];
//int main()
//{
//	int e[51][51] = { 0 }, book[51] = { 0 };
//	int head, tail;
//	int n, m,startx,end,i,j,a,b,cur,flag=0;
//	scanf("%d %d %d %d", &n, &m, &startx, &end);
//	for(i=1;i<=n;i++)//初始化二维数组
//		for (j = 1; j <= n; j++)
//		{
//			if (i == j)
//				e[i][j] = 0;
//			else
//				e[i][j] = 99999;
//		}
//	for (i = 1; i <= m; i++)
//	{
//		scanf("%d %d", &a, &b);
//		e[a][b] = 1;//双向
//		e[b][a] = 1;
//	}
//	//初始化队列
//	head = 1;
//	tail = 1;
//	que[tail].x = startx;
//	que[tail].s = 0;
//	tail++;
//	book[startx] = 1;
//	while (head < tail)
//	{
//		cur = que[head].x;
//		for (j = 1; j <= n; j++)
//		{
//			if (e[cur][j] != 99999 && book[j] == 0)
//			{
//				que[tail].x = j;
//				que[tail].s = que[head].s + 1;
//				tail++;
//				book[j] = 1;
//			}
//			if (que[tail - 1].x == end)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 1)
//			break;
//		head++;
//	}
//	printf("%d", que[tail-1].s);
//	return 0;
//}
//最短路径
//int main()
//{
//	int e[10][10] = { 0 };
//	int n, m,i,j,a,b,c,k;
//	scanf("%d %d", &n, &m);
//	for(i=1;i<=n;i++)
//		for (j = 1; j <= n; j++)
//		{
//			if (i == j)
//				e[i][j] = 0;
//			else
//				e[i][j] = 99999;
//		}
//	for (j = 1; j <= m; j++)
//	{
//		scanf("%d %d %d", &a, &b, &c);
//		e[a][b] = c;
//	}
//	//Floyd-Warshall算法
//	for (k = 1; k <= n; k++)//将k作为中转站，找到i，j之间的最短路径
//		for (i = 1; i <= n; i++)
//			for (j = 1; j <= n; j++)
//				if (e[i][j] > e[i][k] + e[k][j])
//					e[i][j] = e[i][k] + e[k][j];
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			printf("%10d", e[i][j]);
//		}
//		puts("");
//	}
//	return 0;
//}
int main()
{
	int e[10][10], dis[10], book[10] = { 0 }, i, j, n, m, a, b, c, min,u,k;
	int inf = 99999;
	scanf("%d %d", &n, &m);
	for(i=1;i<=n;i++)
		for (j = 1; j <= n; j++)
		{
			if (i == j)
				e[i][j] = 0;
			else
				e[i][j] = inf;
		}
	for (i = 1; i <= m; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		e[a][b] = c;
	}
	for (i = 1; i <= n; i++)
	{
		dis[i] = e[1][i];
	}
	book[1] = 1;
	//Dijkstra
	for (i = 1; i < n; i++)
	{
		//找到离1号最近的点
		min = inf;
		for (j = 1; j <= n; j++)
		{
			if (book[j] == 0 && dis[j] < min)
			{
				min = dis[j];
				u = j;
			}
		}
		book[u] = 1;
		for (k = 1; k <= n; k++)
		{
			if (e[u][k] < inf)
			{
				if (dis[k] > dis[u] + e[u][k])
					dis[k] = dis[u] + e[u][k];
			}
		}
	}
	for (i = 1; i <= n; i++)
	{
		printf("%d ", dis[i]);
	}
	return 0;
}