#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        unsigned int N;
        cin >> N;

        ll a = 1, b = 2, c = 4;
        ll x = ((a & b) | c);
        ll d = x ^ N;

        // Ensure d is in valid range and all values are distinct
        if (d > 0 && d <= 1e18 && d != a && d != b && d != c) {
            cout << a << " " << b << " " << c << " " << d << '\n';
        } else {
            // Try another fixed set
            a = 5; b = 10; c = 20;
            x = ((a & b) | c);
            d = x ^ N;
            if (d > 0 && d <= 1e18 && d != a && d != b && d != c)
                cout << a << " " << b << " " << c << " " << d << '\n';
            else
                cout << -1 << '\n';
        }
    }

    return 0;
}


//que https://www.codechef.com/practice/course/3-star-difficulty-problems/DIFF1700/problems/BITEQU