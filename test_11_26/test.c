#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"


int main()
{
	int n = 0;//书籍种数
	int m = 0;//学生人数
	int q = 0;//操作数
	int i = 0;
	int j = 0;
	int a = 0, b = 0, c = 0;//b是学生编号，c是书籍编号
	int arr[10] = { 0 };//储存每种书籍的个数
	int arr1[10][10] = { 0 };//记录每个学生借过什么编号的书
	int arr2[10][10] = { 0 };//排队人数
	scanf("%d %d %d", &n, &m, &q);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < q; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		if (a == 1)
		{
			jieshu(m,b,c,arr,arr1,arr2);
		}
		else if (a == 2)
		{
			huanshu(m,b, c,arr,arr1,arr2);
		}
	}
	return 0;
}
