int pivotIndex(int* nums, int numsSize) {
    for (int pivot = 0; pivot < numsSize; pivot++) {
        int leftsum = 0;
        int rightsum = 0;

        for (int i = 0; i < pivot; i++) {
            leftsum += nums[i];
        }

        for (int i = pivot + 1; i < numsSize; i++) {
            rightsum += nums[i];
        }

        if (leftsum == rightsum) {
            return pivot;
        }
    }

    return -1;
}