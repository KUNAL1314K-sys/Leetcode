double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int n = nums1Size + nums2Size;
    int arr[n];
    int j =0;
    int k =0;
    int i=0;
    while(j < nums1Size && k < nums2Size){
        if(nums1[j]<nums2[k]){
            arr[i++] = nums1[j++];  
        }
        else{
            arr[i++] = nums2[k++];
        }
    }
    while(j<nums1Size){
        arr[i++] = nums1[j++];
    }
    while(k<nums2Size){
        arr[i++] = nums2[k++];
    }
    
    if(n%2==0){
        return (arr[n/2] + arr[n/2 -1])/2.0;
    }
    else{
        return arr[n/2];
    }
}