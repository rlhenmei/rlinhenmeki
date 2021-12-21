 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int a[10], book[10], n;
//void dfs(int step)
//{
//	int i;
//	if (step == 1 + n)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			printf("%d ", a[i]);
//		}
//		puts("");
//		return;
//	}
//	for (i = 1; i <= n; i++)
//	{
//		if (book[i] == 0)
//		{
//			a[step] = i;
//			book[i] = 1;
//			dfs(step + 1);
//			book[i] = 0;
//		}
//	}
//	return;
//}
//int main()
//{
//	scanf("%d", &n);
//	dfs(1);
//	return 0;
//}
//int a[10], book[10], total = 0;
//void dfs(int step)
//{
//	int i;
//	if (step == 10)
//	{
//		if (a[1] * 100 + a[2] * 10 + a[3] + a[4] * 100 + a[5] * 10 + a[6] == a[7] * 100 + a[8] * 10 + a[9])
//		{
//			total++;
//			printf("%d%d%d+%d%d%d=%d%d%d\n", a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
//			return;
//		}
//	}
//	for (i = 1; i <= 9; i++)
//	{
//		if (book[i] == 0)
//		{
//			a[step] = i;
//			book[i] = 1;
//			dfs(step + 1);
//			book[i] = 0;
//		}
//	}
//	return;
//}
//int main()
//{
//	dfs(1);
//	printf("total=%d", total / 2);
//	return 0;
//}
int n, m,p,q, min = 9999999,a[51][51],book[51][51];
void dfs(int x, int y, int step)
{
	//方向数组
	int arr[4][2] = { {0,1},//向右
					   {1,0},//向下
					    {0,-1},//向左
					     {-1,0} };//向上
	int tx, ty, k;
	if (x == p && y == q)
	{
		if (step < min)
			min = step;
		return;
	}
	for (k = 0; k <= 3; k++)
	{
		tx = x + arr[k][0];
		ty = y + arr[k][1];
		if (tx<1 || tx>n || ty<1 || ty>m)
			continue;
		if (a[tx][ty] == 0 && book[tx][ty] == 0)
		{
			book[tx][ty] = 1;
			dfs(tx, ty, step + 1);
			book[tx][ty] = 0;
		}
	}
	return;
}
int main()
{
	int i, j, startx, starty;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d %d %d %d", &startx, &starty, &p, &q);
	book[startx][starty] = 1;
	dfs(startx, starty, 0);
	printf("%d", min);
	return 0;
}