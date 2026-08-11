#include <bits/stdc++.h>
using namespace std;

class StockSpanner {
public:
    stack<pair<int,int>> st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        if(st.empty()) {
            st.push({price, 0});
            return 1;
        }

        int popCount = 0;
        while(st.size() && st.top().first <= price) {
            popCount++;
            popCount += st.top().second;
            st.pop();
        }

        st.push({price, popCount});
        return popCount + 1;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */