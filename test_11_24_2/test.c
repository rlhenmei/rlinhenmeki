 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int arr[10000] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = i + 1; j < n; j++)
//        {
//            if (arr[i] == arr[j])
//            {
//                arr[j] = 0;
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != 0)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}
// 
// 
// ����������
//����������У�
//
//��һ�а�������������n, m���ÿո�ָ���n��ʾ�ڶ��е�һ���������������ֵĸ�����m��ʾ�����еڶ����������������ֵĸ�����
//
//�ڶ��а���n���������ÿո�ָ���
//
//�����а���m���������ÿո�ָ���
//���������
//���Ϊһ�У��������Ϊn + m���������У�������Ϊn���������кͳ���Ϊm�����������е�Ԫ�����½��������������кϲ���
// һ��������
//int main()
//{
//    int n = 0;//arr1
//    int m = 0;//arr2
//    int arr1[2000] = { 0 };
//    int arr2[1000] = { 0 };
//    int i = 0;
//    int j = 0;
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n + i; j++)
//        {
//            if (arr2[i] < arr1[j])
//            {
//                a = j;
//                for (b = n + i; b > a; b--)
//                {
//                    arr1[b] = arr1[b - 1];
//                }
//                arr1[a] = arr2[i];
//                break;
//            }
//        }
//        if (j == n + i)
//        {
//            arr1[n + i] = arr2[i];
//        }
//    }
//    for (i = 0; i < m + n; i++)
//    {
//        printf("%d ", arr1[i]);
//    }
//    return 0;
//}
//ð������ⷨ
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int j = 0;
//	int arr1[2000] = { 0 };//n
//	int arr2[1000] = { 0 };//m
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		arr1[n + i] = arr2[i];
//	}
//	//ð������
//	int tmp = 0;
//	for (i = 0; i < n + m - 1; i++)
//	{
//		for (j = 0; j < n + m - i-1; j++)
//		{
//			if (arr1[j] > arr1[j + 1])
//			{
//				tmp = arr1[j];
//				arr1[j] = arr1[j + 1];
//				arr1[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < n + m; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
