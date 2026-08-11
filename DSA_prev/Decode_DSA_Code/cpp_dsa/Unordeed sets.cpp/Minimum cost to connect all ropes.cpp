#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int arr[] = {6,5,3,2,8,10,9};
    int n = sizeof(arr)/4;
    int minCost = 0;
    priority_queue<int , vector<int> ,greater<int>> pq;
    for(int ele : arr) {
        pq.push(ele);
    }
    while(pq.size()>0) {
        if(pq.size()==1) break;
        int k1=pq.top();
        pq.pop();
        int k2 = pq.top();
        pq.pop();
        int d = k1 + k2;;
        minCost += d;
        pq.push(d);
    }
    cout<<minCost;
}
