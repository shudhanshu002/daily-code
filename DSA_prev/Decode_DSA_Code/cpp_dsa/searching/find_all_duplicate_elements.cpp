

#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;
int allduplicateele(vector<int> &v,vector<int>& a)
{
    int n=v.size();
    int i=0;
    while(i<n)
    {
        int correctidx=v[i];


        if(v[i] != v[correctidx-1]  ){
            swap(v[i],v[correctidx-1]);
        }

        else i++;
    }
    for(int i=0;i<v.size();i++){
        if(v[i]!=i+1){
            cout<<v[i];
        }
    }
}


int main()
{
    int k;
    vector<int> v;
    for(int i=0;i<6;i++){
        cin>>k;
        v.push_back(k);
    }

    vector<int> a;
    allduplicateele(v,a);

}
