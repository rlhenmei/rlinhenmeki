 
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
	if (arr[c - 1] != 0)//Ҫ����黹��
	{
		printf("Successful book borrowing");
		arr[c - 1]--;
		arr1[b - 1][c - 1]++;//��¼���ѧ�������Ȿ��
	}
	else
	{
		for (i = 0; i < m; i++)
		{
			if (arr2[c - 1][i] == 0)
			{
				arr1[b - 1][c - 1]++;
				arr2[c - 1][i] = b;//�����Ŷӵȴ�
				break;
			}
		}
	}
}
void huanshu(int m, int b, int c, int arr[10], int arr1[10][10], int arr2[10][10])
{
	if (arr1[b - 1][c - 1] == 0)//�黹û�н�����飬��Ч
	{
		;
	}
	else
	{
		arr[c - 1]++;//����ɹ�
		arr1[b - 1][c - 1]--;
		fabu(arr2, c,b, arr,arr1);//������һ����������Ϣ
	}
}
