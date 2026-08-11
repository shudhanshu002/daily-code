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

int kthsmallest(int arr[],int si,int ei,int k)
{
    int pi=partion(arr,si,ei);
    if(pi+1==k) return arr[pi];
    else if (pi+1<k) return kthsmallest(arr,pi+1,ei,k);
    else return kthsmallest(arr,si,pi-1,k);
}


int main()
{
    int arr[]={5,18,82,20,7,6,31,4,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    cout<<kthsmallest(arr,0,n-1,k);
}
