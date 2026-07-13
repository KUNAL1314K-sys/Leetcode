int maximumProduct(int* nums, int numsSize) {
    for (int i = 1; i < numsSize; i++) {
        int key = nums[i];
        int j = i - 1;

    
        while (j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key;
    }

    int max1 = nums[0]*nums[1]*nums[numsSize-1];
    int max2 = nums[numsSize-1]*nums[numsSize-2]*nums[numsSize-3];
    if (max1>max2){
        return max1;
    }
    else{
        return max2;
    }
}