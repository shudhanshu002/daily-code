#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert(Node* &head, int data) {
    Node* new1 = new Node(data);
    if (head == NULL) {
        head = new1;
    } else {
        Node* curr = head;
        while (curr->next) {  // Use curr here, not head
            curr = curr->next;
        }
        curr->next = new1;
    }
}

int sumof(Node* head, int k) {
    Node* temp = head;
    int n = 0;

    // Count the number of nodes
    while (temp) {  // Use temp here, not head
        temp = temp->next;
        n++;
    }

    // Find the starting point (n-k) to start summing
    int j = n - k;
    int sum = 0;
    temp = head;

    // Move the pointer to the (n-k)th node
    while (j) {
        temp = temp->next;
        j--;
    }

    // Sum the values from the (n-k)th node to the end
    while (temp) {
        sum += temp->val;
        temp = temp->next;
    }

    return sum;
}

int main() {
    Node* head = NULL;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        insert(head, data);
    }

    int k;
    cin >> k;
    int sum = sumof(head, k);
    cout << sum;
}
