
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

void display(Node* head)
{
     Node* temp=head;
  while(temp!=NULL){
    cout<<temp->val<<" ";
    temp =temp->next;
  }
  cout<<endl;
}

int size(Node* head)
{
     Node* temp=head;
     int n=0;
  while(temp!=NULL){
    n++;
    temp =temp->next;
  }
  cout<<n<<endl;
}

 void displayrec(Node* head)
    {
        if(head==NULL) return;
        cout<<head->val<<" ";
        displayrec(head->next);
    }

    void revdisplayrec(Node* head)
    {
        if(head==NULL) return;
        revdisplayrec(head->next);
        cout<<head->val<<" ";
    }
    void insertAtTail(Node* head,int val){
        Node* t=new Node(val);
        while(head->next!=NULL) head=head->next;
        head->next=t;
    }
int main()
{
  Node* a=new Node(10);
  Node* b=new Node(12);
  Node* c=new Node(90);
  Node* d=new Node(123);
  a->next =b;
  b->next=c;
  c->next=d;
/*  Node* temp=a;
  while(temp!=NULL){
    cout<<temp->val<<" ";
    temp =temp->next;
  }*/
  display(a);
  size(a);
  insertAtTail(a,456);
  display(a);


}

