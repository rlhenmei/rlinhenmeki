 
#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"
void fabu(int arr2[10][10], int c,int b, int arr[10],int arr1[10][10])
{
	int i = 0;
	int j = 0;
	if (arr[c - 1] > 1)
	{
		arr[c - 1]--;
	}
	if (arr[c - 1] == 1)
	{
		int count = 0;
		int i = 0;
		for (i = 0; i < 1000; i++)
		{
			if (arr2[c - 1][i] != 0)
			{
				count++;
			}
			else
			{
				break;
			}
		}
		if (arr2[c - 1][0] != 0)
		{
			printf("%d", arr2[c - 1][0]);
			for (i = 0; i < count; i++)
			{
				arr2[c - 1][i] = arr2[c - 1][i + 1];
			}
		}
	}
}
void jieshu(int m, int b, int c, int arr[10], int arr1[10][10], int arr2[10][10])
{
	int i = 0;
	if (arr[c - 1] != 0)//要借的书还有
	{
		printf("Successful book borrowing");
		arr[c - 1]--;
		arr1[b - 1][c - 1]++;//记录这个学生借了这本书
	}
	else
	{
		for (i = 0; i < m; i++)
		{
			if (arr2[c - 1][i] == 0)
			{
				arr1[b - 1][c - 1]++;
				arr2[c - 1][i] = b;//进入排队等待
				break;
			}
		}
	}
}
void huanshu(int m, int b, int c, int arr[10], int arr1[10][10], int arr2[10][10])
{
	if (arr1[b - 1][c - 1] == 0)//归还没有借过的书，无效
	{
		;
	}
	else
	{
		arr[c - 1]++;//还书成功
		arr1[b - 1][c - 1]--;
		fabu(arr2, c,b, arr,arr1);//发布下一个借书者信息
	}
}
