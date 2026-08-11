#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define endl '\n'
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    fast_io;

    int n, m;
    cin >> n >> m;
    int count = 0;
    for (int a = 0; a * a <= n; a++)
    {
        for (int b = 0; b * b <= m; b++)
        {
            if (a * a + b == n && a + b * b == m)
                count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
