
#include <iostream>
#include <queue>
#include <climits>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

int sum(Node* root)
{
    if(root==NULL) return 0;
    return root->val+sum(root->left)+sum(root->right);
}

int size(Node* root)
{
    if(root==NULL) return 0;
    return 1+size(root->left)+size(root->right);
}

int maximum(Node* root)
{
    if(root==NULL) return INT_MIN;
    return max(root->val,max(maximum(root->left),maximum(root->right)));
}

int level(Node* root)
{
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}

int productOfAllNodes(Node* root)
{
    if(root==NULL) return 1;
    return root->val*productOfAllNodes(root->left)*productOfAllNodes(root->right);
}

void displayTree(Node* root)
{
    if(root==NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}
void nthLevel(Node* root,int curr,int level){
    if(root==NULL) return;
    if(curr==level) {
            cout<<root->val<<" ";
            return;
    }
    nthLevel(root->left,curr+1,level);
    nthLevel(root->right,curr+1,level);

}

void levelOrder(Node* root){
    int n=level(root);
    for(int i=1;i<=n;i++){
        nthLevel(root,1,i);
        cout<<endl;
    }
}

void levelOrderQueue(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp=q.front() ;
        q.pop();


        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
         cout<<temp->val<<" ";

    }
    cout<<endl;
}

int main()
{
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    Node* h=new Node(8);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    g->right=h;

   //nthLevel(a,1,3);
   //levelOrder(a);

   levelOrderQueue(a);

}
