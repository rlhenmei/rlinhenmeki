 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char arr[20][21];
struct note
{
	int x;
	int y;
};
int getnum(int i, int j)
{
	int sum=0, x, y;
	//向右统计
	x = i; y = j;
	while (arr[x][y] != '#')
	{
		if (arr[x][y] == 'G')
			sum++;
		y++;
	}
	//向下统计
	x = i; y = j;
	while (arr[x][y] != '#')
	{
		if (arr[x][y] == 'G')
			sum++;
		x++;
	}
	//向左统计
	x = i; y = j;
	while (arr[x][y] != '#')
	{
		if (arr[x][y] == 'G')
			sum++;
		y--;
	}
	//向上统计
	x = i; y = j;
	while (arr[x][y] != '#')
	{
		if (arr[x][y] == 'G')
			sum++;
		x--;
	}
	return sum;
}
int main()
{
	struct note que[401];//队列
	int head, tail;
	int book[20][20] = { 0 };
	int i, j, sum, max = 0, mx, my, n, m, startx, starty, tx, ty,k;
	int next[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };//方向数组
	scanf("%d %d %d %d", &n, &m, &startx, &starty);
	for (i = 0; i < n; i++)
	{
		scanf("%s", &arr[i]);
	}
	head = 1;
	tail = 1;
	que[tail].x = startx;//将起点入队
	que[tail].y = starty;
	tail++;
	book[startx][starty] = 1;
	max = getnum(startx, starty);//获取起点可以消灭敌人的数量
	mx = startx;//并将该点坐标记录起来
	my = starty;
	while (head < tail)
	{
		for (k = 0; k <= 3; k++)
		{
			tx = que[head].x + next[k][0];
			ty = que[head].y + next[k][1];
			if (tx<1 || tx>n || ty<1 || ty>m)
				continue;
			if (arr[tx][ty] == '.' && book[tx][ty] == 0)
			{
				book[tx][ty] = 1;
				que[tail].x = tx;
				que[tail].y = ty;
				tail++;
				sum = getnum(tx, ty);
				if (sum > max)
				{
					max = sum;
					mx = tx;
					my = ty;
				}
			}
		}
		head++;
	}
	printf("放在(%d,%d)处消灭最多的敌人，可以消灭%d个敌人", mx, my, max);
	return 0;
}
