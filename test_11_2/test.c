 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int  my_strlen(char *arr)
{
	int n = 0;
	while (*arr != '\0')
	{

		n++;
		arr++;
	}
	return n;
}
//int my_strlen(char* s)
//{
//	if (*s == 0)
//		return 0;
//	else
//		return 1 + my_strlen(s + 1);
//}



int main()
{
	char arr[3] = "abc";//arr是数组名，数组名是数组元素的地址。
	int len=my_strlen(&arr);//
	printf("%d", len);

	return 0;
}