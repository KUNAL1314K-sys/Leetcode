int subtractProductAndSum(int n) {

    int i, sum = 0, product = 1;
    
    while (n>0) {
        int digit =  n % 10;
        product = product * digit;
        sum = sum + digit;
        n = n/10;
    }
    int dif = product - sum;
    return dif;
}