
#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
        }

};


int main()
{
  //   Node a;
   /* a.val=23;
    Node b;
    b.val=43;
    Node c;
    c.val=90;
    Node d;
    d.val=45;*/
    //using conatructor
    Node a(10);
    Node b(90);
    Node c(23);
    Node d(45);
    a.next=&b;
    b.next=&c;
    c.next=&d;
   // cout<<a.next->next->next->val;
   Node temp =a;
   while(temp.next!= NULL){
    cout<<temp.val<<" ";
    temp =*(temp.next);
   }
   cout<<temp.val;

}
