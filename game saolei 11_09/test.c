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
		printf("��ѡ��.>\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			//printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("����������������롣\n");
			break;
		}
	} while (i);
}

int main()
{
	test();
	return 0;
}
