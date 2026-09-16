int chalkReplacer(int* chalk, int chalkSize, int k) {
    long long sum = 0;
    for(int i=0;i<chalkSize;i++){
        sum = sum + chalk[i];
    }
    k = k%sum;
    for(int i =0;i<chalkSize;i++){
        if(chalk[i]>k){
            return i;
        }
        else{
            k = k - chalk[i];
        }
    }
    return 0;
}