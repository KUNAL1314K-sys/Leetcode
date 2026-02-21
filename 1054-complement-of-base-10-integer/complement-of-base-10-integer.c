int bitwiseComplement(int n) {
    int a = n;
    int dummy = 0;

    if (n==0){
        return 1;
    }
    
    while (a!=0){
        dummy = (dummy<<1)|1;
        a = a>>1;
    }
    int ans = (~n) & dummy;
    return ans;
}