#include <iostream>

using namespace std;

class Node
{
public:
    int val;
    Node* left;
    Node* right;


    Node(int val) {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void insert(Node* root,int val)
{
    if(root->val<val) {
        if(root->right == NULL) {
            Node* temp = new Node(val);
            root->right = temp;
            return;
        } else insert(root->right,val);
    }
    if(root->val>val) {
        if(root->left==NULL){
            Node* temp = new Node(val);
            root->left = temp;
            return;
        } else insert(root->left,val);
    }
}

void inorder(Node* root) {
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

void morrisinorder_Reverse_traversal(Node* root)
{
    Node* curr = root;
    while(curr!=NULL) {
        if(curr->right==NULL) {
            cout<<curr->val<<" ";
            curr = curr->left;
        }
        else {
            Node* succ = curr->right;
            while(succ->left !=NULL && succ->left!=curr) {
                succ=succ->left;
            }
            if(succ->left==NULL) {
                //link
                succ->left = curr;
                curr = curr->right;
            }
            else {
                //unlink
                succ->left = NULL;
                cout<<curr->val<<" ";
                curr = curr->left;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    Node* root = new Node(n);
    while(true) {
        cin>>n;
        if(n==-1) break;
        insert(root,n);
    }

    inorder(root);
    cout<<endl;
    morrisinorder_Reverse_traversal(root);

}
