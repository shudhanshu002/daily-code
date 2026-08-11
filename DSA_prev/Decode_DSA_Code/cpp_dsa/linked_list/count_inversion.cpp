#include <iostream>
#include <vector>
using namespace std;
int inversion(vector<int>& a,vector<int>& b)
{
    int count1 =0;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count1+= (a.size()-i);
            j++;
        }
        else i++;
    }
    return count1;
}
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


int mergesort(vector<int>& v)
{
    int number=0;
    int n=v.size();
    if(n==1) return 0;
    int n1=n/2,n2=n-n/2;
    vector<int> a(n1),b(n2);

    for(int i=0;i<n1;i++) a[i]=v[i];
     for(int j=0;j<n2;j++) b[j]=v[j+n1];
     number+=mergesort(a);
     number+=mergesort(b);

     number+=inversion(a,b);
     merge1(a,b,v);
     a.clear();
     b.clear();
     return number;
}

int main()
{
    vector<int> v={2,5,78,23,1,-1,-2};
     int k=mergesort(v);
    cout<<k<<" ";
}
