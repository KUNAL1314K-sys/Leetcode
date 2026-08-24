bool canAliceWin(int n) {
    int  i = 10;
    while(n>=i){
        n = n-i;
        i--;
    }
    if(i%2==1){
        return true;
    }
    
    return false;
}