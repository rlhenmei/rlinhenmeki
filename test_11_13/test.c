 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char tem = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	*(arr + len - 1) = tem;
//}
//
//int main()
//{
//	char arr[] = "asdfghjkl";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	int c=a >> 2;
//	printf("%d", c);
//
//	return 0;
//}
int main()
{
	int num = 0;
	puts("«Î ‰»Î»À ˝°£");
	scanf("%d", &num);
	int i = 0;
	int arr[] = { 0 };
	for (i = 0; i < num; i++)
	{

		scanf("%d", &arr[i]);
	}
	for (i =0 ; i < num; i++)
	{
		printf("%d∫≈:%d\n",i+1, arr[i]);


	}
	
	return 0;
}