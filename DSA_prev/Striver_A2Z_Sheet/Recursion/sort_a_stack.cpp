#include <bits/stdc++.h>
using namespace std;

void insertSorted(stack<int> &st, int x) {
    if(st.empty() || st.top() <= x) {
        st.push(x);
        return;
    }

    int temp = st.top();
    st.pop();

    insertSorted(st, x);

    st.push(temp);
}

void sortStack(stack<int> &st) {
    if(st.size() == 1) return;

    int x = st.top();
    st.pop();

    sortStack(st);

    insertSorted(st, x);
}