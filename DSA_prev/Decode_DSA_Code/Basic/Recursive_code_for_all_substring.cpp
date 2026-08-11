#include <iostream>
#include <string>

using namespace std;

void generateSubarrays(string &s,int start,int end)
{
    if(start==s.size()) return;
    if(end==s.size()+1){
        generateSubarrays(s,start+1,start+1);
        return;
    }

    cout<<s.substr(start,end-start)<<endl;
    generateSubarrays(s,start,end+1);
}

int main() {
    string s = "abc";
    cout << "All subarrays: ";
    generateSubarrays(s, 0, 0);
    cout << endl;
    return 0;
}
