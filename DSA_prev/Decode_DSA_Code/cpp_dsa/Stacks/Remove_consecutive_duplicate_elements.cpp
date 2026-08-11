#include<iostream>
#include<stack>
using namespace std;

string remove(string s)
{
    stack<char> st;
    int i=0;
    while(i<s.length()){
        if(st.size()==0) st.push(s[i]);
        else if(st.top()==s[i]) i++;
        else st.push(s[i]);
        i++;
    }
    s="";
    while(st.size()>0){
        s=st.top()+s;
        st.pop();
    }
    return s;
}

int main()
{
    string s="aaaaaaabbbgheeeror77777777788888888888999999999";
    cout<<s<<endl;
    s=remove(s);
    cout<<s<<endl;
}
