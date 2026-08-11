
#include <iostream>
using namespace std;
void merge1(int arr[],int l,int mid,int r)
{
    //create two temperoray array
    int an=mid-l+1;
    int bn=r-mid;
    int a[an];
    int b[bn];
    for(int i=0;i<an;i++){
        a[i]=arr[l+i];

    }
    for(int j=0;j<bn;j++){
        b[j]=arr[mid+1+j];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<an&& j<bn){
        if(a[i]<b[j]){
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
        }
    }
    while(i<an){
        arr[k++]=a[i++];
    }
    while(j<bn){
        arr[k++]=b[j++];
    }
}

void mergedsort(int arr[],int l,int r)
{
    //base case
    if(l>=r)
        return;
    int mid=(l+r)/2;
    mergedsort(arr,l,mid);
    mergedsort(arr,mid+1,r);
    merge1(arr,l,mid,r);
}

int main()
{
    int arr[]={10,28,24,6,34,18,2,89};
    int  n=sizeof(arr)/sizeof(arr[0]);
    mergedsort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
