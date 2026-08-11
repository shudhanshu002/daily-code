#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void findMinProduct(vector<int> &nums,int index,long long product,bool hasElement,long long &minProduct)
{
    if(index==nums.size()){
        if(hasElement){
            minProduct=min(minProduct,product);
        }
        return;
    }

    findMinProduct(nums,index+1,product*nums[index],true,minProduct);
    findMinProduct(nums,index+1,product,hasElement,minProduct);
}

long long minSubsetProduct(vector<int> &nums){
    long long minProduct=LLONG_MAX;
    findMinProduct(nums,0,1,false,minProduct);
    return minProduct;
}

int main() {
    vector<int> nums = {-3, 4, 1, -2};
    cout << "Minimum subset product: " << minSubsetProduct(nums) << endl;
    return 0;
}
