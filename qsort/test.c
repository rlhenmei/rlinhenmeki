 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//qsortº¯Êý
int j = 0;
int comp(const void* a, const void* b)
{

	j++;
	return *(int*)a - *(int*)b;
}
int main()
{
	int i = 0;
	int* array;
	int n;
	scanf("%d", &n);
	array = (int*)malloc(n * sizeof(int));
	for (; i < n; i++)
	{
		scanf("%d", (array + i));
	}
	qsort(array, n, sizeof(int), comp);
	printf("%d", j);
	return 0;
}
