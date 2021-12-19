 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct l {
//	int date;
//	struct l a;
//};
//int main()
//{
//
//
//
//	return 0;
//}
//int main()
//{
//	int n,i;
//	scanf("%d", &n);
//	while (n)
//	{
//		getchar();
//		char arr[81] = { 0 };
//		gets(arr);
//		int flag = 1;
//		for (i = 0; arr[i] != '\0'; i++) {
//			if (arr[i] == '!') 
//			{
//				flag =!flag;
//				continue;
//			}
//			if (flag == 1) 
//			{
//				printf("%c", arr[i]);
//			}
//			else 
//			{
//				if (arr[i] > 'a' && arr[i] < 'z')
//					printf("%c", arr[i] - 32);
//				else
//					printf("%c", arr[i] + 32);
//			}
//			
//		}
//		puts("");
//		n--;
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, c, d,hour,min;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	if (b > d)
//	{
//		d += 60;
//		c--;
//		hour = c - a;
//		min = d - b;
//	}
//	else
//	{
//		hour = c - a;
//		min = d - b;
//	}
//	printf("%d %d", hour, min);
//	return 0;
//}
//int main()
//{
//	int arr[101] = { 0 };
//	int i = 0;
//	int j;
//	while (1)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] == 0)
//			break;
//		i++;
//	}
//	for (j = i-1; j >= 0; j--)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}
//int main()
//{
//	int n,i,j,count=0;
//	int arr[100] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("0 ");
//	for (i = 1; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[j] < arr[i])
//				count++;
//		}
//		printf("%d ", count);
//		count = 0;
//	}
//	return 0;
//}
//int maxyueshu(int m, int n)
//{
//	if (n == 0)
//		return m;
//	return maxyueshu(n, m % n);
//}
//int main()
//{
//	int a, b, c, d,shu;
//	char ap;
//	scanf("%d%c%d %d%c%d", &a,&ap,&b, &c,&ap, &d);
//	int e = a * c;
//	int f = b * d;
//	int l=maxyueshu(e, f);
//	printf("%d %d", f / l, e / l);
//	return 0;
//}
int main()
{
	int n,a,b,sum;
	int count = 0,rest=0;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d %d", &a, &b);
		sum = a + b;
		if ((sum + rest-8) > 0)
		{
			rest = sum + rest-8;
			count += rest;
		}
		else
		{
			rest = sum+rest-8;
			count += rest;
		}
	}
	printf("%d", count);
	return 0;
}