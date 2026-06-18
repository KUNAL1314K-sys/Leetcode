/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* limitOccurrences(int* nums, int numsSize, int k, int* returnSize) {

    int *arr = (int*)malloc(numsSize * sizeof(int));

    int count = 0;
    int j = 0;

    int temp = nums[0];

    for (int i = 0; i < numsSize; i++) {

        if (temp == nums[i]) {
            count++;
        }
        else {
            temp = nums[i];
            count = 1;
        }

        if (count <= k) {
            arr[j++] = nums[i];
        }
    }

    *returnSize = j;
    return arr;
}