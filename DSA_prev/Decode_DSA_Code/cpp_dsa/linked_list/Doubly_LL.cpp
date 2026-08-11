#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node* next;
    Node* pre;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->pre=NULL;
        }

};

class DoublyLinkedList{
public:


    Node* head;
    Node* tail;
    int size;
    DoublyLinkedList(){
        head=tail=NULL;
        size=0;
    }
     void insertAtTail(int val)
    {
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->pre=tail;//extra things
            tail=temp;
        }
        size++;
    }

    void inserAtHead(int val)
    {
         Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->pre=temp;
            head=temp;
        }
        size++;
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
            insertAtTail(val);
            return;
        }
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<idx;i++ ){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next->pre=t;
            temp->next=t;
            t->pre=temp;

            size++;
        }
    }

    void deleteHead(){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        head=head->next;
        if(head) head->pre=NULL;
        if(head==NULL) tail==NULL;
        size--;
    }
    void deleteTail(){
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        else if(size==1){
            deleteHead();
            return;
        }
        Node* temp=tail->pre;
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
            temp->next->pre=temp;
            return;
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
    void display()
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
    DoublyLinkedList list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);
    list.display();
    list.insertAtTail(50);
    list.display();
    list.inserAtHead(00);
    list.display();
    list.insertAtIdx(3,56);
    list.display();
    list.deleteAtIdx(3);
    list.display();

}
