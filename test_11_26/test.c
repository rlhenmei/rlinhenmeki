#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"


int main()
{
	int n = 0;//�鼮����
	int m = 0;//ѧ������
	int q = 0;//������
	int i = 0;
	int j = 0;
	int a = 0, b = 0, c = 0;//b��ѧ����ţ�c���鼮���
	int arr[10] = { 0 };//����ÿ���鼮�ĸ���
	int arr1[10][10] = { 0 };//��¼ÿ��ѧ�����ʲô��ŵ���
	int arr2[10][10] = { 0 };//�Ŷ�����
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
