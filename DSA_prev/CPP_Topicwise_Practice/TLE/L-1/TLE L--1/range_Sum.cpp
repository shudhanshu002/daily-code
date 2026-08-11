#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        int result = (r * (r + 1)) / 2 - (l * (l + 1)) / 2;
        cout << result << endl;
    }
}