int setbits(int n){
    int count=0;
    if(n==0){
        return 0;
    }
    while(n>>1){
        if(n&1){
            count++;
        }
    }
    return count;
}