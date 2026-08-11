#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(10);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    stack<int> temp;

    //printing stack in reverse
    /*while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    //putting back in temp
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }*/

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
