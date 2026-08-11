
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

class LinkedList{
public:


    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void inserAtHead(int val)
    {
         Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertAtEnd(int val)
    {
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void display()
    {
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void insertAtIdx(int idx,int val)
    {
        if(idx<0 || idx>size) {
            cout<<"Invalid  idx"<<endl;
            return;
        }
        if(idx==0){
            inserAtHead(val);
            return;
        }
        if(idx==size){
            insertAtEnd(val);
            return;
        }
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<idx;i++ ){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
    }
    int getIdx(int idx)
    {
        if(idx<0|| idx>=size){
            cout<<"Invalid idx";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else {
            Node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }
    void deleteHead(){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        head=head->next;
        size--;
    }
    void deleteTail(){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void deleteAtIdx(int idx)
    {
        if(idx<0 || idx>=size) {
            cout<<"Invalid idx";
            return;
        }
        else if(idx==0) deleteHead();
        else if(idx==size-1) deleteTail();
        else {
            Node* temp =head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            return;
        }
    }

};

int main()
{
    LinkedList ll;
    ll.insertAtEnd(90);
    ll.display();
    ll.insertAtEnd(23);
    ll.display();
    ll.insertAtEnd(23);
    ll.insertAtEnd(23);
    ll.insertAtEnd(23);
    ll.display();
    ll.inserAtHead(789);
    ll.display();
    ll.insertAtIdx(2,678);
    ll.display();
    cout<<ll.getIdx(2)<<endl;
    ll.deleteHead();
    ll.display();
    ll.deleteAtIdx(1);
    ll.display();
}
