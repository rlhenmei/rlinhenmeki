 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int arr[100001] = { 0 };
//int arr1[100001] = { 0 };
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = n;
//	while (a)
//	{   scanf("%d", &arr[a]);
//		arr1[arr[a]] = arr[a];
//		a--;
//	}
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		if (arr1[i] != 0)
//		{
//			printf("%d ", arr1[i]);
//			count++;
//		}
//		if (count == n)
//		{
//			break;
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, t, tmp,min;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		while (1)
//		{
//			t = a > b ? a : b;
//			min = a < b ? a : b;
//			tmp = t % min;
//			t = min;
//			min = tmp;
//			if (min == t)
//			{
//				printf("%d\n", t);
//				break;
//			}
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int t, a, b;
//	while(scanf("%d %d",&a,&b)!=EOF)
//	{
//		if (a < b)
//		{
//			t = a;
//			a = b;
//			b = t;
//		}
//		while (b)
//		{
//			if (a % b == 0)
//			{
//				printf("%d\n", b);
//				break;
//			}
//			else
//			{
//				t = a % b;
//				a = b;
//				b = t;
//				if (a % b == 0)
//				{
//					printf("%d\n", b);
//					break;
//				}
//			}
//		}
//
//	
//	
//	}
//	return 0;
//}
//#include <stdio.h>
//int leap(int year);
//int leap(int year)
//{
//    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//        return 1;
//    return 0;
//}
//int main()
//{
//    int year, month, day, i;
//    int m[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    while (~scanf("%d %d %d", &year, &month, &day))
//    {
//        if (leap(year))
//            m[1] = 29;
//        else
//            m[1] = 28;
//        int sum = 0;
//        sum += day;
//        for (i = 1; i < month; i++)
//            sum += m[i - 1];
//        for (i = 1; i < year; i++)
//        {
//            sum += 365;
//            if (leap(i))
//                sum++;
//        }
//        int  dx = sum % 7;
//        if (dx == 0)
//            printf("7\n");
//        else if (dx == 1)
//            printf("1\n");
//        else if (dx == 2)
//            printf("2\n");
//        else if (dx == 3)
//            printf("3\n");
//        else if (dx == 4)
//            printf("4\n");
//        else if (dx == 5)
//            printf("5\n");
//        else if (dx == 6)
//            printf("6\n");
//    }
//    return 0;
//}


//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n)!=EOF)
//	{
//		int i = 0;
//		for (i = 2; i < n; i++)
//		{
//			if (n % i == 0)
//			{
//				printf("No.\n");
//				break;
//			}
//		}
//		if (i == n)
//		{
//			printf("Yes.\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			for (j = 0; j < n-i+1; j++)
//			{
//				printf("*");
//			}
//			for (j = 0; j < 2 * i - 2; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < n-i+1; j++)
//			{
//				printf("*");
//			}
//			puts("");
//		}
//		for (i = 1; i <= n; i++)
//		{
//			for (j = 0; j < i; j++)
//			{
//				printf("*");
//			}
//			for (j = 0; j < 2 * n - 2 * i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	while (scanf("%d\n", &n) != EOF)
//	{
//		sum = 0;
//		i = 0;
//		int arr[30] = { 0 };
//		while (n)
//		{
//			
//			arr[i] = n % 2;
//			if (arr[i] == 1)
//			{
//				sum += pow(2, i);
//			}
//			i++;
//			n /= 10;
//			
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int tmp, tmp1, tmp2;
//	int arr[100][3] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n;i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d ", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j][0] > arr[j + 1][0])
//			{
//				 tmp = arr[j + 1][0];
//				 tmp1 = arr[j + 1][1];
//				 tmp2 = arr[j+1][2];
//				arr[j + 1][0] = arr[j][0];
//				arr[j + 1][1] = arr[j][1];
//				arr[j + 1][2] = arr[j][2];
//				arr[j][0] = tmp;
//				arr[j][1] = tmp1;
//				arr[j][2] = tmp2;
//			}
//		}
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j][0] == arr[j + 1][0])
//			{
//				if (arr[j][1] < arr[j + 1][1])
//				{
//					tmp1 = arr[j + 1][1];
//					tmp2 = arr[j + 1][2];
//					arr[j + 1][1] = arr[j][1];
//					arr[j + 1][2] = arr[j][2];
//					arr[j][1] = tmp1;
//					arr[j][2] = tmp2;
//				}
//			}
//		}
//	}for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j][0] == arr[j + 1][0]&&arr[j][1]==arr[j+1][1])
//			{
//				if (arr[j][2] > arr[j + 1][2])
//				{
//					tmp2 = arr[j + 1][2];
//					arr[j + 1][2] = arr[j][2];
//					arr[j][2] = tmp2;
//				}
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d", arr[i][j]);
//			if (j < 2)
//			{
//				printf(" ");
//			}
//		}
//		
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[100000] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//    for(i = 0; i < n - 1; i++)
//	{
//	    for (j = 0; j < n - 1 - i; j++)
//	    {
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//	     }
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d", arr[i]);
//		}
//		if (i < n - 1)
//		{
//			printf(" ");
//		}
//	}
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main() {
//    int m,i,k;   
//	while (scanf("%d", &m) != EOF)
//	{
//		if (m == 1)
//		{
//			printf("No.\n");
//			continue;
//		}
//		k = (int)sqrt((double)m);
//		for (i = 2; i <= k; i++)
//			if (m % i == 0)
//				break;
//		if (i > k)
//			printf("Yes.\n");
//		else
//			printf("No.\n");
//	}
//    return 0;
//}
//int main()
//{
//	int n = 0;
//	int q = 0;
//	int j = 0;
//	int arr[100000] = { 0 };
//	int arr1[100000] = { 0 };
//	scanf("%d %d", &n, &q);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		
//	}
//	for (i = 0; i < q; i++)
//	{
//		scanf("%d", &arr1[i]);
//		getchar();
//		for (j = 0; j < n; j++)
//		{
//			if (arr1[i] == arr[j])
//			{
//				printf("Pos = %d", j);
//				printf("\n");
//				break;
//			}
//		 }
//		if (j == n)
//		{
//			printf("No response.");
//		}
//	}
//	return 0;
//}