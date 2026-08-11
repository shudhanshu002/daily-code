#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &st, int x) {
    if(st.empty()) {
        st.push(x);
        return;
    }

    int temp = st.top();
    st.pop();

    insertAtBottom(st, x);
    st.push(temp);
}

void reverse(stack<int> &st) {
    if(st.empty()) return;

    int x = st.top();
    st.pop();

    reverse(st);

    insertAtBottom(st,x);
}