int maxDistance(int* colors, int colorsSize) {
    int ans1=0;
    int ans2 =0;
    for(int i=colorsSize-1;i>0;i--){
        if(colors[0]!=colors[i]){
            ans1 = i;
            break;
        }
    }
    for(int j=0;j<colorsSize;j++){
        if(colors[colorsSize-1]!=colors[j]){
            ans2=colorsSize-j-1;
            break;
        }
    }
    return ans1>ans2?ans1:ans2;
    
}
