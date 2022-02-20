 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define MAX 10
//int x = 5, y = 7;
//void swap()
//{
//	int z;
//	z = x;
//	x = y;
//	y = z;
//} 
//int main()
//{
//	int x = 3, y = 8;
//	int a[MAX] = { 0 };
//	printf("%d\n", a[0]);
//	swap();
//	printf("%d,%d\n",x, y);
//	//printf("%d", max);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int j = 0;
//	int m = 1;
//	scanf("%d", &n);
//	for (j = 0; j < n; j++)
//	{
//		m *= 10;
//	}
//	for (j = 1; j < m; j++)
//	{
//		printf("%d ", j);
//	}
//	return 0;
//}
//int main()
//{
//	int year, month, day;
//	int j = 0;
//	int sum = 0;
//	scanf("%d %d %d", &year, &month, &day);
//	int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		arr[1] = 29;
//	}
//	for (j = 0; j < month-1; j++)
//	{
//		sum += arr[j];
//	}
//	sum += day;
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int j = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (j = 1; j < n; j++)
//	{
//		sum += j;
//	}
//	sum = sum * 2 + 1;
//	for (j = 0; j < n; j++)
//	{
//		printf("%d", sum);
//		sum += 2;
//		if (j == n - 1)
//			break;
//		printf("+");
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 2;
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum += a;
//		a += 3;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int i;
//void prt()
//{
//	for (i = 5; i < 8; i++)
//		printf("%c", '*');
//	printf("\t");
//}
//int main()
//{
//	for (i = 5; i <= 8; i++)
//	{
//		prt();
//	}
//
//
//	return 0;
//}
int main()
{
	int n = 0;
	double sum = 0;
	int i = 0;
	int a = 0;
	int num = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a < 0)
			num++;
		if (a == 0)
			n -= 1;
		sum += a;
	}
	printf("%d ", num);
	printf("%.1lf", sum/n);
	return 0;
}