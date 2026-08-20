
int findPeakElement(int* nums, int numsSize) {
    int curr = INT_MIN;
    int ind =0;
    int flag = 0;
    if(numsSize==2){
        if(nums[0]>nums[1]){
            return 0;
        }
        else{
            return 1;
        }
    }
    for(int i =0;i<numsSize-1;i++){
        if(nums[i]>nums[i+1]){
            if(nums[i]>curr){
                curr = nums[i];
                ind = i;
                flag =1;

            }
        }
    }
    if(flag==0){
        return numsSize-1;
    }

    return ind;
    
}