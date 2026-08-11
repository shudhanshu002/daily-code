#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(56);
    pq.push(-1);
    pq.push(22);
    pq.push(4565);
    pq.push(45);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
}
