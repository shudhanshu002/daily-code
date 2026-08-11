
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;
void merge1(const vector<int> &a ,const vector<int> &b,vector<int> &res)
{
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size())
    {
        if(a[i]<=b[j]){
            res[k++]=a[i++];
        }
        else{
            res[k++]=b[j++];
        }
    }
    while(i<a.size()){
        res[k++]=a[i++];
    }
    while(j<b.size()){
        res[k++]=b[j++];
    }


}

void mergesort(vector<int> &v)
{

    int n=v.size();
    int n1=n/2,n2=n-n/2;
    vector<int> a(n1),b(n2);
    //copy paste
     if (n <= 1)
        return;
    for(int  i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    mergesort(a);
    mergesort(b);
    //merge
    merge1(a,b,v);
    a.clear();
    b.clear();
}
int main()
{
    int arr[]={1,4,6,8,563,78,12,0,1,67};
    int n1=sizeof(arr)/sizeof(arr[0]);
    vector<int> a(arr,arr+n1);

    mergesort(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
