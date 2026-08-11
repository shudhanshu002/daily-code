#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin>>m;
    while(m--) {
        string s;
        cin>>s;
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(st.empty()) st.push(s[i]);
            else if(s[i]=='B' && (st.top()=='A' || st.top()=='B')) {
                st.pop();
            }
            else {
                st.push(s[i]);
            }
        }
        cout<<st.size()<<endl;
    }
    
    return 0;
}