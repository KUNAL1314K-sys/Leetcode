/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int* sortedSquares(int* nums, int numsSize, int* returnSize) {

    int *arr = (int*)malloc(numsSize * sizeof(int));

    for(int i = 0; i < numsSize; i++) {
        arr[i] = nums[i] * nums[i];
    }

    qsort(arr, numsSize, sizeof(int), compare);

    *returnSize = numsSize;
    return arr;
}