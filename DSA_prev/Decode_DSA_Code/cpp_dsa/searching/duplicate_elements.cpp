
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;
int findmissing(vector<int> &nums)
{
    int n=nums.size();
    int i=0;
    while(i<n)
    {
        int correctidx=nums[i];
        if(correctidx==i  || nums[i]==n){
            i++;
        }
        else swap(nums[i],nums[correctidx]);

    }
    return n;
}
