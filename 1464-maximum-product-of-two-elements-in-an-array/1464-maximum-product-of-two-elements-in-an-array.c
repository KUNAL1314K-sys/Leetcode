
int maxProduct(int* nums, int numsSize) {
    int max = INT_MIN;
    int max2 = INT_MIN;
    int j =0;
    for(int i;i<numsSize;i++){
        if(nums[i]>max){
            max2 = max;
            max = nums[i];
            j=i;
        }
        else if(nums[i]>max2 && i!=j){
            max2 = nums[i];
        }
    }
    return (max-1)*(max2-1);
}