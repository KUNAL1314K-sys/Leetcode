int findNumbers(int* nums, int numsSize) {
    int count_even = 0;

    for (int i = 0; i < numsSize; i++) {
        int num = nums[i];   
        int count = 0;

        while (num > 0) {
            num = num / 10; 
            count++;         
        }

        if (count % 2 == 0) {
            count_even++;
        }
    }

    return count_even;
}
