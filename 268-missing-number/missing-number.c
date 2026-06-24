int missingNumber(int* nums, int numsSize) {
    int total_xor = 0;
    for(int i=0;i<numsSize+1;i++){
        total_xor = total_xor ^ i;
    }
    
    int nums_xor = 0;
    for(int i =0;i<numsSize;i++){
        nums_xor = nums_xor ^ nums[i];
    }

    return total_xor ^ nums_xor;
    
}