#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long ans = 0;
        long long mx = a[0];

        for (int i = 1; i < n; i++) {

            // same sign
            if ((a[i] > 0 && mx > 0) ||
                (a[i] < 0 && mx < 0)) {

                mx = max(mx, a[i]);
            }
            else {
                ans += mx;
                mx = a[i];
            }
        }

        ans += mx;

        cout << ans << '\n';
    }
}