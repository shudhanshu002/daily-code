#include <bits/stdc++.h>
using namespace std;



struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // if((head==NULL || head->next==NULL) && n==1) return nullptr;   
        ListNode* fast = head;
        ListNode* slow = head;

        // 1-2-3-4-5-null
        // 4 to be deleted
        // 1 3
        // 2 4
        // 3 5
        while(n--) fast = fast->next;

        while(fast && fast->next) {
            fast = fast->next;
            slow = slow->next;
        }

        if(fast == NULL) return head->next;

        // if(slow && slow->next) {
        //     slow->next = slow->next->next;
        // } else {
        //     slow->next = nullptr;
        // }

        slow->next = slow->next->next;

        return head;
    }
};