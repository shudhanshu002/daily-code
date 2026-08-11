#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

string longestcommonprefix(vector<string> &v)
{
    int n=v.size();
    if(n==1) return v[0];
    sort(v.begin(),v.end());
    string first=v[0];
    string last=v[n-1];
    string s="";
    for(int i=0;i<min(first.size(),last.size());i++){
        if(first[i]==last[i]){
            s+=first[i];
        }else return s;
    }
    return s;
}
int main()
{
    vector<string> v[3];
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    //lexographically


    cout<<longestcommonprefix(&v);
}
