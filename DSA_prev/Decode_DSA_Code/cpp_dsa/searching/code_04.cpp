int sqrt(int n)
{
    int lo=0;
    int hi=n;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        long long x=(long long)mid;
        long long y=(long long)n;
        if((x*x==y) return mid;
        else if(x*x>y) hi=mid-1;
        else lo=mid+1;
    }
}
