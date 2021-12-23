 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int book[101], sum, n;
//int e[101][101];//存储哪些数字间有链条
//void dfs(int cur)
//{
//	int i;
//	printf("%d", cur);
//	sum++;
//	if (sum == n)
//		return;
//	for (i = 1; i <= n; i++)
//	{
//		if (e[cur][i] == 1 && book[i] == 0)
//		{
//			book[i] = 1;
//			dfs(i);
//		}
//	}
//}
//int main()
//{
//	int i, j, m, a, b;
//	scanf("%d %d", &n, &m);
//	for(i=1;i<=n;i++)
//		for (j = 1; j <= m; j++)
//		{
//			if (i == j)
//				e[i][j] = 0;
//			else
//				e[i][j] = 99999;
//		}
//	for (i = 1; i <= m; i++)
//	{
//		scanf("%d %d", &a, &b);
//		e[a][b] = 1;
//		e[b][a] = 1;
//	}
//	book[1] = 1;
//	dfs(1);
//	return 0;
//}
int main()
{
	int n, m,i,j,a,b,head,tail,cur;
	int e[101][101], que[10001], book[101] = {0};
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i == j)
				e[i][j] = 0;
			else
				e[i][j] = 99999;
		}
	}
	for (i = 1; i <= m; i++)
	{
		scanf("%d %d", &a, &b);
		e[a][b] = 1;
		e[b][a] = 1;
	}
	head = 1;
	tail = 1;
	que[tail] = 1;
	tail++;
	book[1] = 1;
	while (head < tail && tail <= n)
	{
		cur = que[head];
		for (i = 1; i <= n; i++)
		{
			if (e[cur][i] == 1 && book[i] == 0)
			{
				book[i] = 1;
				que[tail] = i;
				tail++;
			}
			if (tail > n)
				break;
		}
		head++;
	}
	for (i = 1; i < tail; i++)
		printf("%d ", que[i]);
	return 0;
}
