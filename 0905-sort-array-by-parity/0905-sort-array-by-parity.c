/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void swap(int *a, int *b) {
    int temp = *a; // Store the value at address 'a' in temp
    *a = *b;       // Assign the value at address 'b' to address 'a'
    *b = temp;     // Assign the value in temp to address 'b'
}
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int x =0;
    int y =0;
    while(x<numsSize){
        if(nums[x]%2==0){
            swap(&nums[x],&nums[y]);
            x++;
            y++;
        }
        else{
            x++;
        }
    }
    *returnSize = numsSize;
    return nums;

}