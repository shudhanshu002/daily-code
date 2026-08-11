#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    // read about pair class
    unordered_map<string,int> m;
    pair <string,int> p1;
    p1.first ="raghav";
    p1.second=76;
    m.insert(p1);
    p1.first ="sudhanshu singh";
    p1.second=96;
    m.insert(p1);
    pair <string,int> p2;
    p2.first ="raghav kumar";
    p2.second=76;
    m.insert(p2);

    for(pair<string,int> p: m){
        cout<<p.first<<"--->"<<p.second<<endl;
    }


}

