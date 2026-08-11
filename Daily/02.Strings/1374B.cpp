#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
 
        int a = 0, b = 0;
 
        while (n % 2 == 0) {
            a++;
            n /= 2;
        }
 
        while (n % 3 == 0) {
            b++;
            n /= 3;
        }
 
        if (n != 1 || a > b) {
            cout << -1 << '\n';
        } else {
            cout << (2 * b - a) << '\n';
        }
    }
 
    return 0;
}