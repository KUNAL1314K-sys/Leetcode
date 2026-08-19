int peakIndexInMountainArray(int* arr, int arrSize) {
    int qwerty=0;
    for(int i =0;i<arrSize-1;i++){
        if(arr[i]>arr[i+1]){
            qwerty = i;
            break;
        }
    }
    return qwerty;
}