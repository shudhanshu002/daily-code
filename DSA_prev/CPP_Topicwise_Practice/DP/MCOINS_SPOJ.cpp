#include <iostream>
#include <vector>
using namespace std;

vector<int> dp(1000005, -1);

int f(int state, int k, int l) {
    if (state == 0) return 0;  // losing
    if (state < 0) return 1;   // invalid move → opponent wins

    if (dp[state] != -1) return dp[state];

    // winning if any move makes opponent lose
    if (f(state - 1, k, l) == 0) return dp[state] = 1;
    if (state - k >= 0 && f(state - k, k, l) == 0) return dp[state] = 1;
    if (state - l >= 0 && f(state - l, k, l) == 0) return dp[state] = 1;

    // otherwise losing
    return dp[state] = 0;
}


int main() {
    int k,l,m;
    cin>>k>>l>>m;

    for(int i = 2 ;i <= 1000000; i++) {
        f(i,k,l);
    }

    for(int i=0;i<m;i++) {
        int n;
        cin>>n;

        if(dp[n] == 1) {
            cout<<"A";
        } else {
            cout<<"B";
        }
    }
}