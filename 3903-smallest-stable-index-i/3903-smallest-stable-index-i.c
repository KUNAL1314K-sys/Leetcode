int firstStableIndex(int* nums, int numsSize, int k) {
    for (int i = 0; i < numsSize; i++) {

        int max = nums[0];
        int min = nums[i];

        for (int j = 0; j <= i; j++) {
            if (nums[j] > max) {
                max = nums[j];
            }
        }

        for (int j = i; j < numsSize; j++) {
            if (nums[j] < min) {
                min = nums[j];
            }
        }

        if (max - min <= k) {
            return i;
        }
    }

    return -1;
}