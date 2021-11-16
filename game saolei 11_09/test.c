 #define _CRT_SECURE_NO_WARNINGS 
#include"game.h"
void menu()
{
	printf("**********************\n");
	printf("******* 1.play *******\n");
	printf("******* 0.exit *******\n");
	printf("**********************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//Display(mine, ROW, COL);
	setmine(mine, ROW, COL);
	Display(show, ROW, COL);
	//Display(mine, ROW, COL);
	findmine(mine, show, ROW, COL);



}

void test()
{
	int i = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择.>\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			//printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误，请重新输入。\n");
			break;
		}
	} while (i);
}

int main()
{
	test();
	return 0;
}
