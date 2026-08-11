#include <iostream>
#include <string>
using namespace std;
class MaxHeap
{
public:
    int arr[50];
    int idx;
    MaxHeap() {
        idx=1;
    }


    int top() {
        if(idx>1) return arr[1];
        return -1;
    }

    int push(int x) {
        arr[idx]=x;
        int i = idx;
        idx++;

        //heapify
        while(i!=1) {
            int parent = i/2;
            if(arr[i]>arr[parent]) swap(arr[i],arr[parent]);
            else break;
            i=parent;
        }
    }

    int size() {
        return idx-1;
    }

    void pop() {
        idx--;
        arr[1]=arr[idx];
        int i=1;

        while(true) {
            int left = 2*i;
            int right = left+1;
            if(left>idx-1) break;
            if(right>idx-1) {
                if(arr[i]<arr[left]) {
                    swap(arr[i],arr[left]);
                    i=left;
                }
                break;
            }

            if(arr[left] >= arr[right] && arr[i]<arr[left]) {
                swap(arr[i],arr[left]);
                i=left;
            }
            else if(arr[right]>arr[left] && arr[i]<arr[right]) {
                swap(arr[i] , arr[right]);
                i=right;
            }
            else break;
        }
    }

    void display() {
        for(int i=1;i<=idx-1;i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main() {
    MaxHeap pq;
    pq.push(90);
    pq.push(20);
    pq.push(45);
    pq.push(-23);
    pq.push(67);
    pq.push(89);
    pq.push(901);
    pq.push(-1);
    pq.push(0);
    pq.push(200);
    pq.push(2023);
    pq.display();

    cout << "Heap size: " << pq.size() << endl;
    cout << "Top element: " << pq.top() << endl;  // Should output the minimum (20 in this case)
    pq.pop();
    pq.pop();
    cout << "Top element: " << pq.top() << endl;

    return 0;
}
