

#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;
int main()
{
    int arr[]={7,1,2,3,9,5,9,0,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    int maxsum=INT_MAX;
    int maxidx=0;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    maxsum=sum;
    int i=1;
    int j=k;
    while(j<n){
        sum=sum+arr[j]-arr[i-1];
        if(maxsum<sum){
            maxsum=sum;
            maxidx=i;
        }
        i++;
        j++;
    }
    cout<<maxsum<<endl<<maxidx;
}
