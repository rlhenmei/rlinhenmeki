 
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
//		i = b;//把较小的值赋给i。
//	while (1)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//		i--;//i逐渐减小，直到同时能被a和b整除。
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
	//猜数字游戏的过程
	//生成随机数
	int r = rand() % 100 + 1;//0~99-->1~100
	//猜数字
	while (1)
	{
		printf("猜数字:>");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("猜小了\n");
		}
		else if (guess > r)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//时间-设置随机数的生成器

	do
	{
		//打印菜单
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);
	return 0;
}