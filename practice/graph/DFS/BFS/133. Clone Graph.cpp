#include <bits/stdc++.h>
using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

class Solution {
public:
    vector<Node*> nodeRegister;

    void dfs(Node* actual, Node* dup) {
        for(auto nei:actual->neighbors) {
            if(!nodeRegister[nei->val]) {
                Node* newNode = new Node(nei->val);
                nodeRegister[newNode->val] = newNode;
                dup->neighbors.push_back(newNode);
                dfs(nei,newNode);
            } else {
                dup->neighbors.push_back(nodeRegister[nei->val]);
            }
        }
    }

    Node* cloneGraph(Node* node) {
        if(node == NULL) return NULL;
        Node* clone = new Node(node->val);
        nodeRegister.resize(105,NULL);
        nodeRegister[clone->val] = clone;
        dfs(node, clone);
        return clone;
    }
};