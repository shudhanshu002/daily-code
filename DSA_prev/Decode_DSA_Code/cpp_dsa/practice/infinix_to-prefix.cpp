#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    return 2;
}
string solve(string v1,string v2,char ch)
{
    string s="";
    s.push_back(ch);
    s+=v1;
    s+=v2;
    return s;
}
int main()
{
    string s="5*(12/4)+2+(6*4)/8-(3+9)/3";
    //string s="(7+9)*4/8-3";
    stack<string> val;
    stack<char> op;
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }
        else {
            if(op.size()==0 ) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
             else if(s[i]==')') {
                while(op.top()!='('){
                        char ch=op.top();
                        op.pop();
                        string val2=val.top();
                        val.pop();
                        string val1=val.top();
                        val.pop();
                        string ans=solve(val1,val2,ch);
                        val.push(ans);
                      }
                      op.pop();
            }
            else if(priority(s[i])> priority(op.top())) op.push(s[i]);
            else {
                //work
                //i have to do val1 op val2
                while(op.size()>0 && priority(s[i])<= priority(op.top())){
                    char ch=op.top();
                    op.pop();
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    string ans=solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    //op stack can have values;
    while(op.size()>0)
    {
        //work
        char ch=op.top();
        op.pop();
        string val2=val.top();
        val.pop();
        string val1=val.top();
        val.pop();
        string ans=solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top()<<endl;
    cout<<5*(12/4)+2+(6*4)/8-(3+9)/3;
}

