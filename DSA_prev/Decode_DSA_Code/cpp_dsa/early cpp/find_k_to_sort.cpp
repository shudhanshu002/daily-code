#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    bool flag=true;
    int arr[]={5,3,10,3};
    int n=4;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    float kmin=(float)(INT_MIN);
    float kmax=(float)(INT_MAX);

     for(int i=0;i<n-1;i++){
       if(arr[i]>=arr[i+1]){
        kmin=max(kmin,(float)(arr[i]+arr[i+1])/2);
       }
       else{
        kmax=min(kmax,(float)(arr[i]+arr[i+1])/2);
       }
       if(kmin>kmax){
        flag=false;
        break;
       }
    }
    if(flag==false) cout<<-1;
    else if(kmin==kmax){
        if(kmin-(int)kmin==0){
            cout<<"there is only one value of k"<<kmin<<endl;
        }
        else{
            cout<<-1;
        }
    }
    else{
            if(kmin-(int)kmin>0){
                kmin=(int)kmin+1;
            }
    cout<<"range of k is:["<<kmin<<","<<(int)kmax<<"]";}

}
