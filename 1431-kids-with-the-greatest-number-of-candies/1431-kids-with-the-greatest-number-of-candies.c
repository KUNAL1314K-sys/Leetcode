/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int max = INT_MIN;
    for(int i =0;i<candiesSize;i++){
        if(candies[i]>max){
            max = candies[i];
        }
    }
    *returnSize = candiesSize;
    bool* ans =(bool*)malloc(candiesSize*sizeof(bool));
    for(int i=0;i<candiesSize;i++){
        if(candies[i]+extraCandies>=max){
            ans[i]=true;
        }
        else{
            ans[i]=false;
        }

    } 
    return ans;
}