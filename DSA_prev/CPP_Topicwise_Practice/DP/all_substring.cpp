#include <iostream>
#include <string>
using namespace std;

void subString(int start, int end, string &s) {
    if(start == s.size()) return;

    if(end == s.size()) {
        subString(start+1, start+1, s);
        return;
    }

    cout<< s.substr(start, end - start + 1) << endl;

    subString(start, end+1,s);
}



int main() {
    string s = "abc";
    subString(0, 0, s);
}