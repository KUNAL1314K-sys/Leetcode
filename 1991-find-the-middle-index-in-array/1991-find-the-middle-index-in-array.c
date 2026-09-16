int findMiddleIndex(int* nums, int numsSize) {
    int sum = 0;

    for(int i = 0; i < numsSize; i++) {
        sum += nums[i];
    }

    int left = 0;

    for(int i = 0; i < numsSize; i++) {
        sum -= nums[i];

        if(left == sum) {
            return i;
        }

        left += nums[i];
    }

    return -1;
}