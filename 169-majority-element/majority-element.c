#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int cmpfunc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int majorityElement(int* nums, int numsSize) {
    // Step 1: Sort using qsort (O(n log n))
    qsort(nums, numsSize, sizeof(int), cmpfunc);

    // Step 2: Handle single element case
    if (numsSize == 1) {
        return nums[0];
    }

    // Step 3: Count consecutive elements
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

