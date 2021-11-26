 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char* my_strcpy(char* c, const char* b)
{
	char* cp = c;
	while (*cp++ = *b++);
	return (c);
}
int my_strlen(const char* a)
{
	char* b = a;
	while (*b++);
	return (b - a - 1);
}
void arr_(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int t = 0;
	while (left < right)
	{
		while (left < right && arr[left] % 2 == 1)//找到第一个偶数
		{
			left++;
		}
		while (left < right && arr[right] % 2 == 0)//找到第一个奇数
		{
			right--;
		}
		if (left < right)
		{
			t = arr[left];
			arr[left] = arr[right];
			arr[right] = t;
		}
	}
}
int main()
{
	char a[20] = { 0 };
	char b [20]= "";
	scanf("%s", &b);
	my_strcpy(&a,&b);
	printf("%s", a);

	return 0;
}
