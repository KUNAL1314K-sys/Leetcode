int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int maxcount =0;
    int count = 0;
    for(int i = 0;i<numsSize;i++){
        if(nums[i]==1){
            count++;
        }
        if(count>maxcount){
            maxcount = count;
        }
        if(nums[i]!=1){
            count =0;
        }
    }
    return maxcount;
    
}