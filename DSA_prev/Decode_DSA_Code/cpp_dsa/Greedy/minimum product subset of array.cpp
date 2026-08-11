#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int minProduct(vector<int> &arr) {
    int cn= 0,cz = 0,cp = 0;
    int prod_posi = 1;
    int prod_neg = 1;
    int largest_negative = INT_MIN;
    for(int i = 0; i < arr.size(); i++ ){
        if(arr[i]> 0) {
                cp++;
                prod_posi *= arr[i];
        }
        else if(arr[i]<0) {
                cn++;
                prod_neg *= arr[i];
                largest_negative = max(largest_negative,arr[i]);
        }
        else cz++;
    }
    if(cn == 0) {
        if(cz > 0) return 0;
        else {
            auto it = min_element(arr.begin(), arr.end());
            return *it;
        }
    } else {
        if(cn % 2 == 0) {
            return (prod_neg/largest_negative)*prod_posi;
        }
        else {
            return prod_neg*prod_posi;
        }
    }
}
    int main()
    {

        vector<int> arr{ -2 ,-3,1,4,-2};
        cout<<minProduct(arr)<<endl;
    }
