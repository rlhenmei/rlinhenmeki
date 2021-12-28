 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n, m,i,j,a,b,c,count=0,min,sum=0,k;
	int inf = 99999;
	int dis[10] = { 0 }, book[10] = { 0 };
	int e[10][10] = { 0 };
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
		e[b][a] = c;
	}
	for (i = 1; i <= n; i++)
		dis[i] = e[1][i];
	//将1号顶点加入生成树
	book[1] = 1;
	count++;
	while (count < n)
	{
		min = inf;
		for (i = 1; i <= n; i++)
		{
			if (book[i] == 0 && dis[i] < min)
			{
				min = dis[i];
				j = i;
			}
		}
		book[j] = 1;
		count++;
		sum += dis[j];
		for (k = 1; k <= n; k++)
		{
			if (book[k] == 0 && dis[k] > e[j][k])
				dis[k] = e[j][k];
		}
	}
	printf("%d ", sum);
	return 0;
}
