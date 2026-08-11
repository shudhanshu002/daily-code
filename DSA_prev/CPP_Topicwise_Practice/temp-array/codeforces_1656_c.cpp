#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <limits>
#include <math.h>
#include <utility>
#include <queue>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define sort(v) sort(v.begin(),v.end())
#define ip INT_MAX
#define in INT_MIN
#define pb push_back
#define pp pair<int,int>
#define nl '\n'
static ll mod = 1e9 + 7;


const int N = 1e6 + 7;
int a[N];
void solve() {
    int n;
    cin >> n;
    int flag1 = 0,
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        if(a[i] == 1) flag1 = 1;
        if(a[i] == 0) flag0 = 0;
    }
    sort(a + 1, a + n + 1);
    if(flag1) {
        for(int i = 2; i <= n; i ++) {
            if(a[i] - a[i - 1] == 1) {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
    else {
        cout << "YES" << endl;
    }
}
int main() {
    int T;
    cin >> T;
    while(T --) solve();
}