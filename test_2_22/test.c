 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int cmp(const void* a, const void* b)
//{
//	return (*(int*)a - *(int*)b);
//}
//void swap(void* p1, void* p2, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		char tmp = *((char*)p1 + i);
//		*((char*)p1 + i) = *((char*)p2 + i);
//		*((char*)p2 + i) = tmp;
//	}
//}
//void myqsort(void* base, int count, int size, int(*cmp)(const void*, const void*))
//{
//	int i, j;
//	for (i = 0; i < count - 1; i++)
//	{
//		for (j = 0; j < count - 1 - i; j++) 
//		{
//			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//			{
//				swap((char*)base + j * size, (char*)base + (j + 1) * size,size);
//			}
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,4,5,6,7,8,3,0,9 };
//	myqsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	puts("");
//	return 0;
//}
//int cmp(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//int main()
//{
//	char arr[20] = "abdisdushs";
//	int arr1[] = { 0,23,43,54,6,2,34,12,23 };
//	qsort(arr1, sizeof(arr1) / sizeof(arr1[0]), 4, cmp);
//	qsort(arr, 20, 1, cmp);
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	puts("");
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//int main()
//{
//	/*char c;
//	int v0 = 0, v1 = 0, v2 = 0;
//		do
//		{
//			switch (c = getchar())
//			{
//			case'a':case'A':
//			case'e':case'E':
//			case'i':case'I':
//			case'o':case'O':
//			case'u':case'U':v1 += 1;
//			default: v0 += 1; v2 += 1;
//			}
//		} while (c != '\n');
//		printf("v0=%d,v1=%d,v2=%d\n", v0, v1, v2);*/
//	int a[] = { 4, 0, 2, 3, 1 }, i, j, t;
//	for (i = 1; i < 5; i++)
//	{
//		t = a[i];
//		j = i - 1;
//		while (j >= 0 && t < a[j])
//		{
//			a[j + 1] = a[j];
//			--j;
//		} a
//			[j + 1] = t;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//		return 0;
//}
//int cmp(int* a, int* b)
//{
//    return *a - *b;
//}
//int* findErrorNums(int* nums, int numsSize, int* returnSize) 
//{
//    int* errorNums = malloc(sizeof(int) * 2);
//    *returnSize = 2;
//    qsort(nums, numsSize, sizeof(int), cmp);
//    int prev = 0;
//    for (int i = 0; i < numsSize; i++) 
//    {
//        int curr = nums[i];
//        if (curr == prev)
//        {
//            errorNums[0] = prev;
//        }
//        else if (curr - prev > 1) 
//        {
//            errorNums[1] = prev + 1;
//        }
//        prev = curr;
//    }
//    if (nums[numsSize - 1] != numsSize) 
//    {
//        errorNums[1] = numsSize;
//    }
//    return errorNums;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        char arr[100] = { 0 };
//        int count[3] = { 0 };
//        scanf("%s", arr);
//        if (strlen(arr) < 8 || (arr[0] >= 48 && arr[0] <= 57))
//        {
//            printf("NO\n");
//            continue;
//        }
//        for (int j = 0; j < strlen(arr); j++)
//        {
//            if (arr[j] >= 48 && arr[j] <= 57)
//            {
//                count[0] = 1;
//            }
//            else if (arr[j] >= 65 && arr[j] <= 90)
//            {
//                count[1] = 1;
//            }
//            else
//                count[2] = 1;
//            if ((count[0] + count[1] + count[2]) == 2)
//                printf("YES\n");
//        }
//    }
//    return 0;
//}
int main()
{
	/*char arr[80] = "1123";
	puts(arr);
	puts("");
	do
	{

	} while (1);*/
	char ch = 32;
	printf("%d", ch);
	return 0;
}