#include <iostream>
#include <string>
#include <vector>
using namespace std;

int inversion(vector<int> &a,vector<int> &b)
{
    int count=0;
    int i=0,j=0;
    while(i<a.size()  && j<b.size()){
        if(a[i]>b[j]){
            count +=(a.size()-i);
            j++;
        }
        else i++;
    }
    return count;
}


// quick sort

int partition(int arr[],int si,int ei)
{
    int pivotEle=arr[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotEle) count++;

    }
    int pivotIdx=count+si;
    swap(arr[(si+ei)/2],arr[pivotIdx]);
    int i=si;
    int j=ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<= pivotEle) i++;
        else if(arr[i]>pivotEle && arr[j]<=pivotEle) {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else j--;
    }
    return pivotIdx;
}

void quicksort(int arr[],int si,int ei)
{
    if(si>=ei) return;
    int pi=partition(arr,si,ei);
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}

int main()
{

    int arr[]={9,8,7,5,4};
    quicksort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
