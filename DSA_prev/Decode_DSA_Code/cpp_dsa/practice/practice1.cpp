#include <iostream>
#include <vector>
#include <limits>
#include <malloc.h>
#include <math.h>
#include <algorithm>
using namespace std;

void bubble(vector<int> &arr)
{

    int n =arr.size();
    bool swapped;
    for(int i=0;i<n-1;i++) {
            swapped = false;
        for(int j=0; j<n-1-i; j++) {

            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}

//Slection sort
void selection(vector <int>&arr) {
    int n=arr.size();
    for(int i=0;i<n-1;i++) {
        int min = 99999999999999999999;
        int minIdx = -1;
        for(int j=i;j<n;j++) {
            if(arr[j]<min) {
                min = arr[j];
                minIdx = j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
}

void insertion( vector<int> &arr) {
    int n = arr.size();
    for(int i=1;i<n;i++) {
        for(int j=i;j>0;j--) {
            if(arr[j]>arr[j-1]) break;
            if(arr[j]<arr[j-1]) {
                swap(arr[j],arr[j-1]);
            }
        }
    }
}

void printArray(const vector<int> &arr) {
    for(int num: arr)
        cout<<num << " ";
    cout<<endl;

}

int binSearch(vector<int> arr,int n) {
    int lo=0;
    int hi = arr.size()-1;
    while(lo<=hi) {
        int mid = lo +(hi-lo)/2;
        if(arr[mid]==n) return mid;
        else if(arr[mid]>n) hi =mid-1;
        else lo=mid+1;
    }

}

void towerOfHanoi(int n,char source,char auxillary,char destination)
{
    if(n==0) return;
    towerOfHanoi(n-1,source,destination,auxillary);
    cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    towerOfHanoi(n-1,auxillary,source,destination);
}

void generateSubsets(string &s,string curr, int idx,vector<string> &result) {
    if(idx == s.length()) {
        result.push_back(curr);
        return;
    }

    generateSubsets(s, curr, idx+1,result);
    generateSubsets(s,curr + s[idx], idx+1,result);
}

vector<string> getAllSubsets(string s) {
    vector<string> result;
    generateSubsets(s, "", 0, result);
    return result;
}

void merge(const vector<int>&a,const vector<int>&b,vector<int> &res)
{
    int i=0,j=0,k=0;

    while(i<a.size() && j<b.size()) {
        if(a[i] <= b[j]) {
            res[k++] = a[i++];
        } else {
            res[k++] =b[j++]
        }

    }
    while(i<a.size()) res[k++] = a[i++];
    while(j<b.size()) res[k++] = b[j++];
}

void mergeSort(vector<int> &v) {

}

int main() {
    string s = "abc";
    vector<string> subsets = getAllSubsets(s);

    cout << "Subsets of \"" << s << "\":\n";
    for (const string &subset : subsets)
        cout << "\"" << subset << "\"\n";

    return 0;
}
