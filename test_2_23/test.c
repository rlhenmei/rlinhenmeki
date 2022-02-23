 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int cmp(const void* a, const void* b)
//{
//	return *(double*)a - *(double*)b;
//}
//int dominantIndex(double* nums, int numsSize)
//{
//	if (numsSize == 1)
//	{
//		return 0;
//	}
//	qsort(nums, numsSize, sizeof(double), cmp);
//	int max = nums[numsSize - 1];
//	int left = 0;
//	int right = numsSize - 1;
//	while (left < right)
//	{
//		int mid = (left + right) / 2;
//		if (nums[mid] <= nums[numsSize - 1] / 2)
//		{
//			left = mid + 1;
//		}
//		else if (nums[mid] > nums[numsSize - 1] / 2)
//		{
//			return -1;
//		}
//	}
//	return numsSize-1;
//}
//int dominantIndex(int* nums, int numsSize) {
//	if (numsSize == 1) return 0;
//	int max, sec, idx;
//	
//	if (nums[0] > nums[1]) {
//		max = nums[0];
//		idx = 0;
//		sec = nums[1];
//	}
//	else {
//		max = nums[1];
//		idx = 1;
//		sec = nums[0];
//	} for (int i = 2; i < numsSize; i++) 
//	{
//		if (nums[i] > max) 
//		{ 
//			sec = max;
//			max = nums[i]; 
//			idx = i; 
//		}
//		else if (nums[i] > sec) 
//		{
//			sec = nums[i];
//		}
//	} if(max >= sec * 2) 
//		{
//		return idx;
//		} return - 1;
//}
//int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
//	static int arr[1000];
//	int i, j, k;
//	*returnSize = 0;
//	for (i = 0; i < nums1Size; i++)
//	{
//		for (j = 0; j < nums2Size; j++)
//		{
//			if (nums1[i] == nums2[j])
//				break;
//		}
//		if (nums2Size == j)
//			continue;
//		for (j = 0; j < *returnSize; j++)
//		{
//			if (nums1[i] == arr[j])
//				break;
//		}
//		if (j == *returnSize)
//		{
//			arr[*returnSize] = nums1[i];
//			*returnSize += 1;
//		}
//	}
//	return arr;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[1025] = { 0 };
//	while (scanf("%s", arr) != EOF)
//	{
//		int len = strlen(arr);
//		int i = 0;
//		int hash[1025] = { 0 };
//		for (i = 0; i < len; i++)
//		{
//			hash[arr[i]]++;
//		}
//		for (i = 0; i < 1025; i++)
//		{
//			while (arr[i] != 0)
//			{
//				printf("%c", i);
//				hash[i]--;
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	double* arr = (double*)malloc(sizeof(double) * n);
//	scanf("%d", &n);
//	if (n == 1)
//	{
//		scanf("%d", arr);
//		printf("0\n");
//		return 0;
//	}
//	
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%lf", arr + i);
//	}
//	int a=dominantIndex(arr, n);
//	printf("%d\n", a);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%lf ", arr[i]);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	char c[] = { 'a','b','\0','c','\0' };
//	printf("%s", c);
//
//	return 0;
//}
int check(int num)
{
    int arr[5] = { 0 };
    for (int j = 0; j < 5; j++)
    {
        if (num % 10 != 0)
        {
            arr[j] = num % 10;
            j++;
            num /= 10;
        }
        else if (num % 10 == 0)
        {
            return 0;
        }
    }
    for (int j = 0; j < 5; j++)
    {
        if (num % arr[j] == 0)
        {
            continue;
        }
        else {
            return 0;
        }
    }
    return num;
}
int* selfDividingNumbers(int left, int right, int* returnSize) {
    *returnSize = 1;
    int* array = (int*)malloc(sizeof(int));
    array = left;
    int i = left + 1;
    for (i; i < right; i++)
    {
        if (check(i) != 0)
        {
            array[*returnSize] = i;
            *returnSize += 1;
        }
    }
    array[*returnSize] = right;
    return array;
}