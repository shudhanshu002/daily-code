#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> &st)
{
    //printing stack
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    //putting back in temp
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}

void pushAtBottom(stack<int> &st,int val)
{
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
     while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}

void pushAtIndex(stack<int> &st,int idx,int val)
{
    stack<int> temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
     while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}

void displayrec(stack<int>& st)
{
    if(st.size()==0) return;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    displayrec(st);
    st.push(x);
}

void displayrecrev(stack<int>& st)
{
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    displayrecrev(st);
    cout<<x<<" ";
    st.push(x);
}

void pushAtBottomrec(stack<int> &st,int val)
{
    if(st.size()==0) {
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushAtBottomrec(st,val);
    st.push(x);
}

void pushElementInReverseOrder(stack<int> &st)
{
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    pushElementInReverseOrder(st);
    pushAtBottomrec(st,x);
}
int main()
{
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    cout<<endl;
    pushAtBottom(st,80);
    pushAtIndex(st,2,34);
    print(st);
    cout<<endl;
    displayrec(st);
    cout<<endl;
    displayrecrev(st);
    pushAtBottomrec(st,67);
    cout<<endl;
    pushElementInReverseOrder(st);
}
