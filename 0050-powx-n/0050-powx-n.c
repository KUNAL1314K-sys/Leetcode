double myPow(double x, int n) {
    long m = n;
    double ans = 1;
    if(m<0){
        x = 1.0/x;
        m = -m;
    }
    while(m>0){
        if((m&1)==1){
            ans = ans*x;
        }
        x = x*x;
        m = m>>1;
    }
    return ans;
    
}