 #define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
#include<string.h>
//int main(void)
//{
//    char str1[10], str2[10], str3[10];
//    printf("请输入字符串：");
//    scanf("%s%s%s", str1, str2, str3);
//    printf("输出结果：%s %s %s\n", str1, str2, str3);  //%s间要加空格
//    return 0;
//}
//int main()
//{
//	char arr[] = {0};
//	scanf("%s", &arr);
//	printf("%s", arr);
//	return 0;
//}

//void reverse_string(char* arr)
//{
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//	while (left < right)
//	{
//		char i = *left;
//		*left = *right;
//		*right = i;
//		left++;
//		right--;
//	}
//}
//
//
//void reverse_string(char* arr)
//{
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//	if(left<right)
//
//
//}
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//
//	*(arr + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[10];
//	scanf("%s", arr);
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}
//void  adj(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{   int t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//
//
//			}
//		}
//
//
//	}
//
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//
//		scanf("%d", &arr[i]);
//
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	adj(arr,sz);
//	for (int n = 0; n < 10; n++)
//	{
//		printf("%d ", arr[n]);
//
//
//
//	}
//	return 0;
//}
//void init(int arr[],int sz)
//{
//	int n= 0;
//	for (n = 0; n < sz; n++)
//	{
//		arr[n] = 0;
//
//	}
//
//
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//
//	}
//}
//void reverse(int arr[],int sz)
//{
//	int left = arr;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int t = left;
//		left = right;
//		right = t;
//		left++;
//		right--;
//	}
//
//
//}
int main()
{
	int i = 0;
	int arr2[10]= {0};
	int arr1[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < 10; i++)
	{

		scanf("%d", &arr2[i]);
	}
	for (i = 0; i < 10; i++)
	{
		int t = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = t;
	}
	return 0;
}