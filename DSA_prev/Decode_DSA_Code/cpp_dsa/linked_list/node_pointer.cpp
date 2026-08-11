

#include <iostream>
using namespace std;
class Node {
public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class Linkedlist {
public:
       Node* head;
       Node* tail;
       int size;
       Linkedlist(){
            head=tail=NULL;
            size=0;
       }
       void insertAtEnd(int val)
{
    Node* temp=new Node(val);
    if(size==0) head=tail=temp;
    else {
        tail->next=temp;
        tail=temp;
    }
    size++;
}

void insertAtHead(int val)
{
    Node* temp=new Node(val);
    if(size==0) head=tail=temp;
    else {
        temp->next=head;
        head = temp;
    }
}

void Display()
{
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
    };





int main()
{
 /*   Node* a=new Node(10);
    Node* b= new Node (20);
    Node* c=new Node(30);
    Node* d= new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;*/

    Linkedlist ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.Display();
    ll.insertAtHead(90);
    ll.Display();
}
