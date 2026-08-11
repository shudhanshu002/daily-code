
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int k=3;
    int n =10;
    priority_queue<int> pq;
    for(int i=0;i<n;i++) {
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();
}
