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
	InitBoard(board, ROW, COL);//��ʼ������
	Display(board, ROW, COL);//��ӡ����
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
		printf("���ʤ��\n");
	}
	else if (ret == '#')
	{
		printf("����ʤ��\n");
	}
	else
	{
		printf("ƽ�֡�\n");
	}
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��<\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
