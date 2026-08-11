#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
int main()
{
   // string s;
   // getline(cin,s);
    string str="raghav is a a a maths teacher. he is a maths teacher and dsa mentor in the class";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }

    sort(v.begin(),v.end());
    int maxcount=1;
    int count=1;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        maxcount=max(maxcount,count);
    }
     count=1;
    cout<<maxcount<<endl;
}
