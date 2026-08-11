
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;
int partion(int arr[],int si,int ei)
{
    int pivotEle=arr[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++){
            if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotEle) count++;
    }
    int pivotidx=count+si;
    swap(arr[(si+ei)/2],arr[si+count]);
    int i=si;
    int j=ei;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<=pivotEle) i++;
            if(arr[j]>pivotEle)  j--;
        else if(arr[i]>pivotEle  && arr[j]<=pivotEle) {
            swap(arr[i],arr[j]);
            i++;
            j--;

        }
    }
    return pivotidx;
}


void quickSort(int arr[],int si,int ei)
{
    if(si>=ei) return;
    int pi=partion(arr,si,ei);
    quickSort(arr,si,pi-1);
    quickSort(arr,pi+1,ei);
}


int main()
{
    //int arr[]={5,1,8,-98,98,2,3};
    int arr[]={5,18,82,20,7,6,31,4,-8};
    int n1=sizeof(arr)/sizeof(arr[0]);
    vector<int> a(arr,arr+n1);

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n1-1);
     for(int i=0;i<n1;i++){
        cout<<arr[i]<<" ";
    }


}
