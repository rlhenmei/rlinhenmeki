 #define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("**********************\n");
	printf("******* 1.play *******\n");
	printf("******* 0.exit *******\n");


}
void game()
{
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);//初始化棋盘
	Display(board, ROW, COL);//打印棋盘
	char ret = 0;
	while (1)
	{
		player_move(board, ROW, COL);
		Display(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'c')
			break;
		computer_move(board, ROW, COL);
		Display(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'c')
			break;
	}
	if (ret == '*')
	{
		printf("玩家胜。\n");
	}
	else if (ret == '#')
	{
		printf("电脑胜。\n");
	}
	else
	{
		printf("平局。\n");
	}
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择<\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
