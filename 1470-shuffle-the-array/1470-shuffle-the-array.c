
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    *returnSize = numsSize;
    int* ans = (int*)malloc(numsSize*sizeof(int));
    int x =0;
    int y = numsSize/2;
    for(int i=0;i<numsSize;i++){
        if(i%2==0){
            ans[i] = nums[x++];
        }
        else{
            ans[i] = nums[y++];
        }
    }
    return ans;
}