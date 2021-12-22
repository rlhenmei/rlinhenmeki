 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//char a[20][21];
//int book[20][20];
//int mx, my, n, m, max,sum;
//int getnum(int i, int j)
//{
//	int  x, y;
//	//向上搜索
//	x = i; y = j;
//	while (a[x][y] != '#')
//	{
//		if (a[x][y] == 'G')
//			sum++;
//		x--;
//	}
//	//向右搜索
//	x = i; y = j;
//	while (a[x][y] != '#')
//	{
//		if (a[x][y] == 'G')
//			sum++;
//		y++;
//	}
//	//向下搜索
//	x = i; y = j;
//	while (a[x][y] != '#')
//	{
//		if (a[x][y] == 'G')
//			sum++;
//		x++;
//	}
//	//向左搜索
//	x = i; y = j;
//	while (a[x][y] != '#')
//	{
//		if (a[x][y] == 'G')
//			sum++;
//		y--;
//	}
//	return sum;
//}
//void dfs(int x, int y)
//{
//	int arr[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
//	int k,tx,ty;
//	sum = getnum(tx, ty);
//	if (sum > max)
//	{
//		max = sum;
//		mx = tx;
//		my = ty;
//	}
//	for (k = 0; k <= 3; k++)
//	{
//		tx = x + arr[k][0];
//		ty = y + arr[k][1];
//		if (tx<1 || tx>n || ty<1 || ty>m)
//			continue;
//		if (a[tx][ty] == '.' && book[tx][ty] == 0)
//		{
//			book[tx][ty]=1;
//			dfs(tx, ty);
//		}
//	}
//	return;
//}
//int main()
//{
//	int i, startx, starty;
//	scanf("%d %d %d %d", &n, &m,&startx,&starty);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", &a[i]);
//	}
//	book[startx][starty] = 1;
//	max = getnum(startx, starty);//获得起点消灭敌人数量
//	mx = startx;
//	my = starty;
//	dfs(startx, starty);//拓展下一个点
//	return 0;
//}
//int a[51][51], book[51][51], n, m,sum;
//void dfs(int x, int y)
//{
//	int next[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
//	int k,tx,ty;
//	for (k = 0; k <= 3; k++)
//	{
//		tx = x + next[k][0];
//		ty = y + next[k][1];
//		if (tx<1 || tx>n || ty<1 || ty>m)
//			continue;
//		if (a[tx][ty] > 0 && book[tx][ty] == 0)
//		{
//			book[tx][ty] = 1;
//			sum++;
//			dfs(tx, ty);//尝试下一个点
//		}
//	}
//	return;
//}
//int main()
//{
//	int i, j, startx, starty;
//	scanf("%d %d %d %d", &n, &m, &startx, &starty);
//	for (i = 0; i < n; i++)
//		for (j = 0; j < m; j++)
//			scanf("%d", &a[i][j]);
//	book[startx][starty] = 1;
//	sum = 1;
//	dfs(startx, starty);
//	printf("%d", sum);
//	return 0;
//}
int a[51][51];
int book[51][51], n, m, sum;
void dfs(int x, int y, int color)
{
	int next[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
	int k, tx, ty;
	a[x][y] = color;
	for (k = 0; k <= 3; k++)
	{
		tx = x + next[k][0];
		ty = y + next[k][1];
		if (tx<1 || tx>n || ty<1 || ty>m)
			continue;
		if (a[tx][ty] > 0 && book[tx][ty] == 0)
		{
			book[tx][ty] = 1;
			sum++;
			dfs(tx, ty, color);
		}
	}
	return;
}
int main()
{
	int i, j, num = 0;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			scanf("%d", &a[i][j]);
	for (i = 1; i <= n; i++)
	{
		for(j = 1; j <= m; j++)
		{
			if (a[i][j] > 0)
			{
				n--;//小岛需要染的颜色的序号，每个小岛需要不一样的序号；
				book[i][j] = 1;
				dfs(i, j, num);
			}
		}
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			printf("%3d", a[i][j]);
		}
		puts("");
	}
	printf("有%d个小岛。\n", -num);
	return 0;
}