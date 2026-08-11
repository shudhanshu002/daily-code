
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void findLargestString(string &current,int idx,string &maxString)
{
    if(idx==current.size()){
        maxString = max(maxString,current);
        return;
    }

    for(int i=idx;i<current.size();i++){
        swap(current[idx],current[i]);
        findLargestString(current,idx+1,maxString);
        swap(current[idx],current[i]);
    }
}

string lexicographicalLargestString(string s)
{
    string maxString =s;
    findLargestString(s,0,maxString);
    return maxString;
}

int main() {
    string s = "abczdxm";
    cout << "Lexicographically largest string: " << lexicographicalLargestString(s) << endl;
    return 0;
}
