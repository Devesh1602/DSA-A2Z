/*
The TreeNode struct represents a node in the binary tree.
The findMin function traverses the left child of the tree until it reaches the leftmost node, and then returns that node.
The findMax function traverses the right child of the tree until it reaches the rightmost node, and then returns that node.
In the main function, we create a sample BST and call the findMin and findMax functions to find the minimum and maximum nodes, respectively.
This code efficiently finds the minimum and maximum nodes in a BST by traversing the leftmost and rightmost nodes, respectively.




*/
#include <iostream>
using namespace std;

// Definition for a binary tree node.
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
            data = val;
            left = NULL;
            right = NULL;
        }
};
    // Function to find the minimum node in the BST
    Node* findMin(Node* root) {
        // Keep traversing the left child until we reach the leftmost node
        while (root->left != NULL) {
            root = root->left;
        }
        // Return the leftmost node
        return root;
    }

    // Function to find the maximum node in the BST
    Node* findMax(Node* root) {
        // Keep traversing the right child until we reach the rightmost node
        while (root->right != NULL) {
            root = root->right;
        }
        // Return the rightmost node
        return root;
    }

int main() {
    // Create a sample BST
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->left = new Node(12);
    root->right->right = new Node(18);


    // Find the minimum node in the BST
    Node* minNode = findMin(root);
    cout << "Minimum node in the BST: " << minNode->data << endl;

    // Find the maximum node in the BST
    Node* maxNode = findMax(root);
    cout << "Maximum node in the BST: " << maxNode->data << endl;

    return 0;
}
