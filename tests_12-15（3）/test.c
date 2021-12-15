 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char a[101] = { 0 };
//	char s[101] = { 0 };
//	int i,mid,len,next;
//	int top = 0;
//	gets(a);
//	len = strlen(a);
//	mid = len / 2;
//	for (i = 0; i < mid; i++)
//	{
//		s[++top] = a[i];
//	}
//	if (len % 2 == 0)
//	{
//		next = mid;
//	}
//	else
//	{
//		next = mid + 1;
//	}
//	for (i = next; i <= len - 1; i++)
//	{
//		if (a[i] != s[top])
//			break;
//		top--;
//	}
//	if (top == 0)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char a[256] = { 0 };
//	gets(a);
//	int len = strlen(a);
//	int i, count1=0,count2=0;
//	for (i = 0; i < len; i++)
//	{
//		if (a[i] == 'b' || a[i] == 'o' || a[i] == 'y')
//			count1++;
//		else if (a[i] == 'g' || a[i] == 'i' || a[i] == 'r' || a[i] == 'l')
//			count2++;
//	}
//	for (i = 0; i < len; i++)
//	{
//		if (a[i] == 'b' && a[i + 1] == 'o' && a[i + 2] == 'y' && i < len - 2)
//		{
//			count1 -= 2;
//			i += 2;
//		}
//		else if (a[i] == 'b' && a[i + 1] == 'o' && i < len - 1)
//		{
//			count1 -= 1;
//			i += 1;
//		}
//		else if (a[i] == 'o' && a[i + 1] == 'y' && i < len - 1)
//		{
//			count1--;
//			i++;
//		}
//		//girl
//		if (a[i] == 'g' && a[i + 1] == 'i' && a[i + 2] == 'r' && a[i + 3] == 'l' && i < len - 3)
//		{
//			count2 -= 3;
//			i += 3;
//		}
//		else if(a[i] == 'g' && a[i + 1] == 'i' && a[i + 2] == 'r'&&i<len-2)
//		{
//			count2 -= 2;
//			i += 2;
//		}
//		else if (a[i] == 'g' && a[i + 1] == 'i' && i < len - 1)
//		{
//			count2--;
//			i++;
//		}
//		else if (a[i] == 'i' && a[i + 1] == 'r' && a[i + 2] == 'l' && i < len - 2)
//		{
//			count2 -= 2;
//			i += 2;
//		}
//		else if (a[i] == 'r' && a[i + 1] == 'l' && i < len - 1)
//		{
//			count2--;
//			i++;
//		}
//	}
//	printf("%d\n%d", count1, count2);
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char a[260] = { 0 };
//	gets(a);
//	int len = strlen(a);
//	int count1=0, count2=0,i;
//	for (i = 0; i <=len; i++)
//	{
//		if (a[i] == 'b' || a[i + 1] == 'o' || a[i + 2] == 'y')
//			count1++;
//		if (a[i] == 'g' || a[i + 1] == 'i' || a[i + 2] == 'r' || a[i + 3] == 'l')
//			count2++;
//	}
//	printf("%d\n%d", count1, count2);
//	return 0;
//}
//int arr[10000] = { 0 };
//
