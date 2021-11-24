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
// 输入描述：
//输入包含三行，
//
//第一行包含两个正整数n, m，用空格分隔。n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。
//
//第二行包含n个整数，用空格分隔。
//
//第三行包含m个整数，用空格分隔。
//输出描述：
//输出为一行，输出长度为n + m的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。
// 一个个插入
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
//冒泡排序解法
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
//	//冒泡排序
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
