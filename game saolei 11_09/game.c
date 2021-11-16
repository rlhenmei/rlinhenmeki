 #define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[ROWS][COLS], int row, int col, int set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;

		}
	}

}
void Display(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <=col; i++)
	{
		printf("%2d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%2d ", i);
		for (j = 1; j <=col; j++)
		{

			printf("%2c ", board[i][j]);

	    }
		printf("\n");
	}

	printf("\n");
}
void setmine(char board[ROWS][COLS], int row, int col)
{
	int n = a;

	while (n)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y]=='0')
		{
             board[x][y] = '1';
			 n--;
		}

	}

}
int get_mine_lei(char mine[ROWS][COLS], int x,int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';

}
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int pai = 0;
	while (pai < row * col - a)
	{
		printf("请输入要排查的坐标。");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾你被炸死了。\n");
				Display(mine, row, col);
				break;
			}
			else
			{
				//计算周围有几个雷
				int n = get_mine_lei(mine, x, y);
				show[x][y] = n + '0';
				Display(show, row, col);
				pai++;
			}

		}
		else
		{

			puts("坐标非法，请重新输入。");
		}
	}
	if (pai == row * col - a)
	{
		puts("恭喜你排雷成功。");
		Display(mine, row, col);
	}
}
