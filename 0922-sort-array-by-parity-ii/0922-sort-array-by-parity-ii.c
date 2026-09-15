/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* ans = (int*)malloc(numsSize * sizeof(int));
    int even = 0;
    int odd = 1;
    for(int i =0;i<numsSize;i++){
        if(nums[i]%2==0){
            ans[even] = nums[i];
            even = even +2;
        }
        else{
            ans[odd] = nums[i];
            odd = odd+2;
        }
    }
    return ans;
    
}