 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void print(int(*p)[5], int r, int c)
//{
//	int i, j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("********************************\n");
//	printf("******       1.Add      ********\n");
//	printf("******       2.Sub      ********\n");
//	printf("******       3.Mul      ********\n");
//	printf("******       4.Div      ********\n");
//	printf("*************0.exit**************\n");
//	printf("********************************\n");
//}
//int main()
//{
//	int imput = 0;
//	int x, y = 0;
//	int (*p[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &imput);
//		if (imput == 0)
//			printf("退出计算器");
//		else if (imput >= 1 && imput <= 4)
//		{
//			printf("输入两个操作数。");
//			scanf("%d %d", &x, &y);
//			int ret = p[imput](x, y);
//			printf("%d\n", ret);
//		}
//		else
//			printf("选择错误\n");
//	} while (imput);
//
//	return 0;
//}
int a(char s1[],int x)
{
	int i = 0;
	int y = 0;
	for (i = 0; i < x; i++)
	{
		if (s1[i] == 0)
			return y;
		y++;
	}
}
char zuo(char s[], int x)
{
	int tmp = s[0];
	int i = 0;
	for (i = 0; i < x-1; i++)
	{
		s[i] = s[i + 1];
	}
	s[x] = tmp;
	return s[x];
}
int main()
{
	int m = 0;
	char s1[10] = { 0 };
	char s2[10] = { 0 };
	scanf("%s", &s1);
	int m1 = a(s1,10);
	getchar();
	scanf("%s", &s2);
	while (m<m1)
	{
		if (s2 == zuo(s1, m1))
		{
			printf("1");
			return 0;
		}
		m++;
	}

	return 0;
}