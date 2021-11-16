#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (n = 1; n <=i; n++)
//		{
//			int a = i * n;
//			printf("%d*%d=%d ",i,n,a );
//	}
//
//		printf("\n");
//
//
//	}
//
//	return 0;
//}
// int main()
//{
//	int n = 0;
//	double sum = 0;
//	for (n = 1; n <= 100; n++)
//	{
//
//		if (n % 2 == 0)
//			sum = sum - (1.0 / n);
//		else
//			sum = sum + (1.0/ n);
//
//
//
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int max = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//
//
//
//	}
//	printf("最大数是%d。", max);
//
//	return 0;
//}
//int main()
//{
//	char arr[10] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", &arr);
//	int a = 0;
//	while ((a = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认密码(Y/N)");
//	int ch = getchar();
//	if (ch == 'Y')
//		printf("确认成功");
//	else
//		printf("确认失败");
//
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 2,4,5,6,8,9,10,12,13,14 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 12;	
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//		{
//			printf(" 找到了，下标是%d", mid);
//			break;
//		}
//
//	}
//	if (left>right)
//		printf("找不到了。");
//	return 0;
//}#include<stdio.h>
//int main()
//{
//    printf("Practice makes perfect!");
//
//
//    return 0;
//}
//int main()
//{
//    printf("v   v\n");
//    printf(" v v\n");
//    printf("  v\n");
//    return 0;
//}
//int main()
//{ printf("The size of short is %d bytes.\n",sizeof(short));
//printf("The size of int is %d bytes.\n",sizeof(int));
//printf("The size of long is %d bytes.\n",sizeof(long));
//printf("The size of long long is %d bytes.\n",sizeof(long long));
// return 0;
//}
//int main()
//{
//    int a = printf("Hello world!");
//    printf("\n");
//    printf("%d", a);
//    return 0;
//}
int main()
{
    double a = 0, b = 0, c = 0; int number = 0;
    scanf("%d", &number);
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("The each subject score of No.%dis%.2f,%.2f,%.2f", number, a, b, c);

    return 0;
}