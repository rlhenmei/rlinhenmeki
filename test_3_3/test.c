 #define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	const char dest[] = "oldstring";
//	const char src[] = "newstring";
//
//	printf("Before memmove dest = %s, src = %s\n", dest, src);
//	memmove(dest, src, 9);
//	printf("After memmove dest = %s, src = %s\n", dest, src);
//
//	return(0);
//}
#include <stdio.h>
#include <string.h>
#include<assert.h>
//void my_memcpy(void* dest,const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest=(char*)dest+1;
//		src=(char*)src+1;
//	}
//	return;
//}
//void* my_memcpy(void* dest, const void*src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//
//	while (num--) 
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//
//	return ret;
//}
// void test1()
//{
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//1 2 1 2 3 4 5 8 9 10
//	//my_memcpy(arr3+2, arr3, 5 * sizeof(arr3[0]));
//	my_memmove(arr3, arr3+2, 20);
//
//	//memcpy(arr3+2, arr3, 20);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//}
// int main()
//{
//	//test1();
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	/*strcpy(arr2, arr1);*///¿½±´×Ö·û´®µÄ
//
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr4[5] = { 0 };
//
//	my_memcpy(arr4, arr3+5, 5*sizeof(arr3[0]));
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", arr4[i]);
//	}
//
//	return 0;
//}
//int main(void)
//{
//	
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[5] = { 0 };
//	my_memcpy(arr2, arr1+5,5*sizeof(arr1[0]));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d  ", arr2[i]);
//	}
//	return 0;
//}
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest <= src || (char*)dest >= ((char*)src + num))
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		dest = (char*)dest +num-1;
//		src = (char*)src +num- 1;
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest - 1;
//			src = (char*)src - 1;
//		}
//	}
//	return ret;
//}
int my_strlen(char* p)
{
	int count = 0;
	while (*p++){		//p++;
		count++;
	}
	return count;
}
char* my_strcpy(char* dst, const char* src)
{
	char* ret = dst;
	while (*dst++ = *src++)
	{
		;
	}
	return dst;
}
char* my_strcmp(const char* dst, const char* src)
{
	assert(dst && src);
	while (*dst == *src)
	{
		if (*dst == '\0')
			return 0;
		dst++;
		src++;

	}
	return *dst - *src;
}
char* my_strcat(char* dst, const char* src)
{
	char* ret = dst;
	assert(dst && src);
	while (*dst)
	{
		dst++;
	}
	while (*dst++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "bite";
	char arr2[] = " very good";
	my_strcat(arr1, arr2);
	/*int ret=my_strcmp(arr1, arr2);*/
	printf("%s",arr1 );
	/*my_strcpy(arr1, arr2);
	printf("%s", arr1);*/
	//int len=my_strlen("abcdedr");
	//printf("%d", len);
	return 0;
}