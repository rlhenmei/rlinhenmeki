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
	//����ͳ��
	x = i; y = j;
	while (arr[x][y] != '#')
	{
		if (arr[x][y] == 'G')
			sum++;
		y++;
	}
	//����ͳ��
	x = i; y = j;
	while (arr[x][y] != '#')
	{
		if (arr[x][y] == 'G')
			sum++;
		x++;
	}
	//����ͳ��
	x = i; y = j;
	while (arr[x][y] != '#')
	{
		if (arr[x][y] == 'G')
			sum++;
		y--;
	}
	//����ͳ��
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
	struct note que[401];//����
	int head, tail;
	int book[20][20] = { 0 };
	int i, j, sum, max = 0, mx, my, n, m, startx, starty, tx, ty,k;
	int next[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };//��������
	scanf("%d %d %d %d", &n, &m, &startx, &starty);
	for (i = 0; i < n; i++)
	{
		scanf("%s", &arr[i]);
	}
	head = 1;
	tail = 1;
	que[tail].x = startx;//��������
	que[tail].y = starty;
	tail++;
	book[startx][starty] = 1;
	max = getnum(startx, starty);//��ȡ������������˵�����
	mx = startx;//�����õ������¼����
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
	printf("����(%d,%d)���������ĵ��ˣ���������%d������", mx, my, max);
	return 0;
}
