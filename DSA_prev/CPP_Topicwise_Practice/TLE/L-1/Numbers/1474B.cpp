// #include <bits/stdc++.h>
// using namespace std;
//
// vector<int> generate_Primes(int limit) {
//     vector<bool> is_prime(limit+1, true) ;
//     is_prime[0] = is_prime[1] = false;
//     for(int i=2; i*i<=limit;i++) {
//         if(is_prime[i]) {
//             for(int j=i*i; j<=limit; j+=i) {
//                 is_prime[j] = false;
//             }
//         }
//     }
//     vector<int> primes;
//     for(int i=;i<=limit;i++) {
//         if(is_prime[i]) primes.push_back[i];
//     }
//     return primes;
// }
//
// int main() {
//
//     int t;
//     cin>>t;
//
//     vector<int> primes = generate_primes(30000);
//
//     while(t--) {
//         int d;
//         cin>>d;
//
//         int p1 = *lower_bound(primes.begin(),primes.end(), d+1);
//         int p2 = *lower_bound(primes.begin(),primes.end(),p1+d);
//
//         cout<< p1*p2<<endl;
//     }
//
//     return 0;
//}