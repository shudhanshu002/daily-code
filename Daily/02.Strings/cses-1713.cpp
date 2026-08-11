#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;

    while(t--){
        int n;
        cin>>n;

        int count =0;
        int count = 0;

        for(int i = 1; i * i <= n; i++) {
            if(n % i == 0) {
                if(i == n / i)
                    count += 1;   // perfect square
                else
                    count += 2;   // pair of divisors
            }
        }

        cout<<count<<endl;
    }
}