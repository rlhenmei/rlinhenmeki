#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
//int main()
//{
//
//
//    int* arr = (int*)malloc(numsSize * sizeof(int));
//    *returnSize = 0;
//    while (*returnSize < numsSize) {
//        int i = 0;
//        int sum = 1;
//        for (i = 0; i < numsSize; i++) {
//            if (i != *returnSize) {
//                sum *= nums[i];
//            }
//        }
//        arr[*returnSize] = sum;
//        *returnSize++;
//    }
//    return arr;
//}
#include<stdlib.h>
int returnSize;
int hash[1000] = { 0 };
int* findDisappearedNumbers(int* nums, int numsSize) {
    returnSize = 0;
    int* arr = (int*)malloc(sizeof(int) * (1+numsSize));
    for (int i = 1; i < numsSize; i++) {
        hash[nums[i]] = 1;
    }
    for (int i = 1; i < numsSize; i++) {
        if (hash[i] != 1) {
            arr[returnSize] = i;
            returnSize++;
        }
    }
    return arr;
}
int main()
{
    int nums[5] = { 1,3,2,4,2 };
    int* arr=findDisappearedNumbers(nums, 5);
    for (int i = 0; i <=returnSize ; i++) {
       
    }

    return 0;
}
