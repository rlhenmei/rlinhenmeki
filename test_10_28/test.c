 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	for(n=1;n<=a;n++)
//	{
//		for (i = 1; i<=a-n; i++)
//	{
//		printf(" ");
//
//		}
//		if (i > a - n)
//		{
//			for (b = 1; b <= 2 * n - 1; b++) 
//			{
//				printf("*"); 
//			}
//			printf("\n");
//		}
//
//	}    
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//		i = a;
//	else
//		i = b;//�ѽ�С��ֵ����i��
//	while (1)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//		i--;//i�𽥼�С��ֱ��ͬʱ�ܱ�a��b������
//
//
//}
//
//
//	return 0;
// }
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int n = 0;
//	scanf("%d %d", &a, &b);
//	while (n = a % b)
//	{
//		a = b; 
//		b = n;
//
//	}
//	printf("%d", b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0; 
//	scanf("%d", &a);
//	for (b = 1; b <= a; b++)
//	{
//		for (i = 1; i <= a; i++)
//		{
//			printf("*");
//			if (i == a)
//			{
//				printf("\n");
//			}
//
//
//
//	     }
//		
//			
//	}
//
//
//
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int lenth = 0;
//	int width = 0;
//	int i = 0;
//	int n = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		lenth = a;
//		width = b;
//	}
//	else
//	{
//		lenth = b;
//		width = a;
//	}
//	for (i = 1; i <= width; i++)
//	{
//		for (n = 1; n <= lenth; n++)
//		{
//			printf("*");
//			if (n == lenth)
//			{
//				printf("\n");
//			}
//		}
//
//
//	     
//
//	}
//	return 0;
//}
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("***************************\n");
	printf("*****    1. play     ******\n");
	printf("*****    0. exit     ******\n");
	printf("***************************\n");
}


void game()
{
	int guess = 0;
	//��������Ϸ�Ĺ���
	//���������
	int r = rand() % 100 + 1;//0~99-->1~100
	//������
	while (1)
	{
		printf("������:>");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("��С��\n");
		}
		else if (guess > r)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//ʱ��-�����������������

	do
	{
		//��ӡ�˵�
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);
	return 0;
}