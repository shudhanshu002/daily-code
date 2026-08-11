#include <iostream>
#include <vector>
using namespace std;
void merge1(const vector<int>& a,const vector<int>& b,vector<int>& res)
{
    int i=0,j=0,k=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]<=b[j]){
            res[k++]=a[i++];
        }
        else res[k++]=b[j++];
    }

    while(i<a.size()){
        res[k++]=a[i++];
    }
    while(j<b.size()){
        res[k++]=b[j++];
    }
}


void mergesort(vector<int>& v)
{
    int n=v.size();
    if(n<=1) return;
    int n1=n/2,n2=n-n/2;
    vector<int> a(n1),b(n2);

    for(int i=0;i<n1;i++) a[i]=v[i];
     for(int j=0;j<n2;j++) b[j]=v[j+n1];
     mergesort(a);
     mergesort(b);
     merge1(a,b,v);
     a.clear();
     b.clear();
}

int main()
{
    vector<int> v={2,5,78,23,1,-1};
    mergesort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
