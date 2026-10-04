int sumOddLengthSubarrays(int* arr, int arrSize) {
    int n = arrSize;
    int result = 0;
    for(int i =0;i<arrSize;i++){
        int start = n-i;
        int end = i+1;
        int total = start*end;
        int odd = total/2;
        if (total%2!=0){
            odd = odd+1;
        }
        result = result + odd*arr[i];
    }
    return result;
}