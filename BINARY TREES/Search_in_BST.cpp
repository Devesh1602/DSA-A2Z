// Problem: Search in a Binary Search Tree

//              BST
//               8
//          /       \
//         5         12
//      /    \     /    \
//     4     7    10    14
//          /          /
//         6         13

// Time Complexity: O(log2(n)) or O(h)
// Reason: As we traverse only log2(n) nodes
// Where h = height of BST

// Space Complexity: O(1)
// Reason: Not using any Data Structure

#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val) {
            data = val;
            left = NULL;
            right = NULL;
        }
};

Node* searchBST(Node* root, int key) {
    if(root==NULL || root->data==key)
    {
        return root;
    }
    if(root->data<key)
    {
        return searchBST(root->right,key);
    }
    return searchBST(root->left,key);
}


int main(){
    Node* root = new Node(8);
    root->left = new Node(5);
    root->right = new Node(12);
    root->left->left = new Node(4);
    root->left->right = new Node(7);
    root->right->left = new Node(10);
    root->right->right = new Node(14);
    root->left->right->left = new Node(6);
    root->right->right->left = new Node(13);

    int key = 10;
    cout << "Key " << key << " " << (searchBST(root, key) ? "found" : "not found" ) << " in BST" << endl;
    key = 9;
    cout << "Key " << key << " " << (searchBST(root, key) ? "found" : "not found" ) << " in BST" << endl;
    return 0;
}