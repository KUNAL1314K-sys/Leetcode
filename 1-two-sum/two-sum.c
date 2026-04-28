#include <stdlib.h>

/**
 * Note: The returned array must be malloc'ed, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc(2 * sizeof(int));

    // Step 1: Create a copy with values + original indices
    typedef struct {
        int val;
        int idx;
    } Pair;

    Pair* arr = (Pair*)malloc(numsSize * sizeof(Pair));
    for (int i = 0; i < numsSize; i++) {
        arr[i].val = nums[i];
        arr[i].idx = i;
    }

    // Step 2: Bubble sort by value
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = 0; j < numsSize - i - 1; j++) {
            if (arr[j].val > arr[j + 1].val) {
                Pair temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Step 3: Apply your two-pointer logic
    int start = 0;
    int end = numsSize - 1;
    while (start < end) {
        int sum = arr[start].val + arr[end].val;
        if (sum == target) {
            result[0] = arr[start].idx;
            result[1] = arr[end].idx;
            free(arr);
            return result;   // guaranteed solution
        } else if (sum > target) {
            end--;
        } else {
            start++;
        }
    }

    // Should never reach here since solution always exists
    *returnSize = 0;
    free(arr);
    return NULL;
}
