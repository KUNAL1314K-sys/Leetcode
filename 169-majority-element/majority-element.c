#include <stdio.h>
#include <stdlib.h>


int cmpfunc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int majorityElement(int* nums, int numsSize) {

    qsort(nums, numsSize, sizeof(int), cmpfunc);

    if (numsSize == 1) {
        return nums[0];
    }


    int count_f = 0;
    int count = 1;
    int k = nums[0];

    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i+1]) {
            count++;
        } else {
            count = 1;
        }

        if (count_f < count) {
            count_f = count;
            k = nums[i];
        }
    }

    return k;
}

