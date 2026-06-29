#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;

    if (x < y)
        return -1;
    if (x > y)
        return 1;
    return 0;
}


int singleNumber(int* nums, int numsSize)
{
    // Sort the array
    qsort(nums, numsSize, sizeof(int), compare);

    int arr[numsSize];
    int k = nums[0];
    int j = 0;

    int long long sum = 0;

    for(int i = 0; i < numsSize; i++)
    {
        sum += nums[i];

        if(i == 0 || k != nums[i])
        {
            arr[j++] = nums[i];
            k = nums[i];
        }
    }

    int long long uniqueSum = 0;

    for(int l = 0; l < j; l++)
    {
        uniqueSum += arr[l];
    }

    return (3 * uniqueSum - sum) / 2;
}