#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void findFactors(int n) {
    vector<int> factors;
    for(int i=1;i*1<=n;i++) {
        if(n%i == 0){
            cout<<i<<" ";
            if(i!=n/i) {
                factors.push_back(n/i);
            }
        }
    }

    for(int i=factors.size()-1;i>=0;i--) {
        cout<<factors[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factors of " << num << " are: ";
    findFactors(num);

    return 0;
}
