#include <iostream>
using namespace std;

int main() {
    long long k;
    cin >> k;

    // Find the starting position (j-th odd number)
    long long j = 1 + ((k - 1) * k) / 2;

    // First term of the group (j-th odd number)
    long long first = 2 * j - 1;

    // Last term of the group
    long long last = first + (k - 1) * 2;

    // Sum of k terms in AP: k * (first + last) / 2
    long long sum = k * (first + last) / 2;

    cout << sum << endl;
    return 0;
}
