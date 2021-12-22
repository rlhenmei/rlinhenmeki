 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct note
{
	int x;
	int y;
};
int main()
{
	struct note que[2501];
	int head, tail;
	int arr[51][51];
	int book[51][51] = { 0 };
	int i, j,k, sum, max, mx, my, n, m, startx, starty, tx, ty;
	int next[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
	//输入坐标行列数和坐标
	scanf("%d %d %d %d", &n, &m, &startx, &starty);
	//输入地图
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			scanf("%d", &arr[i][j]);
	//处理队列
	head = 1;
	tail = 1;
	que[tail].x = tx;
	que[tail].y = ty;
	tail++;
	book[startx][starty] = 1;
	sum = 1;
	while (head < tail)
	{
		for (k = 0; k <= 3; k++)
		{
			tx = startx + next[k][0];
			ty = starty + next[k][1];
			if (tx<1 || tx>n || ty<1 || ty>m)
				continue;
			if (arr[tx][ty] > 0 && book[tx][ty] == 0)
			{
				sum++;
				book[tx][ty] = 1;
				que[tail].x = tx;
				que[tail].y = ty;
				tail++;
			}
		}
		head++;
	}
	printf("%d\n", sum);
	return 0;
}
