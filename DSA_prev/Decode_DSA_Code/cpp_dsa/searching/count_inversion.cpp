#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;
int count12=0;

int countreturn(vector<int> v)
{
    int count1=0;
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]>v[j]) count1++;
        }
    }
    return count1;
}
int main()
{
    int arr[]={5,1,8,2,3};
    int n1=sizeof(arr)/sizeof(arr[0]);
    vector<int> a(arr,arr+n1);
    cout<<countreturn(a);
}
