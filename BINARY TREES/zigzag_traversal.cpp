// Problem: Zig-Zag or Spiral Traversal in Binary Tree


//        Tree
//         1
//       /  \
//      2    3
//     / \    |
//    4   5    6

// ZigZag Traversal = [
//     [1], 
//     [3, 2], 
//     [4, 5, 6]
// ]

// Time Complexity: O(n)
// Reason: As we traverse all the node of tree.

// Space Complexity: O(n)
// Reason: At worst case if all the node are at same level queue store all the n nodes.

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node() {
            data = 0;
            left = NULL;
            right = NULL;
        }

        Node(int val) {
            data = val;
            left = NULL;
            right = NULL;
        }
};

vector<vector<int> > zigZagTraversal(Node* root) {
    vector<vector<int> > ans;
    if(root == NULL) return ans;
    queue<Node*> q;
    q.push(root);
    
    // 0 -> Left to Right Traversal, 1 -> Right to Left Traversal
    bool flag = 0;

    while(!q.empty()) {
        int size = q.size();
        vector<int> level;
        for (int i = 0; i < size; i++)
        {
            Node *node = q.front();
            q.pop();
            if(node->left != NULL) q.push(node->left);
            if(node->right != NULL) q.push(node->right);
            level.push_back(node->data);
        }
        // If flag = 1, Reverse vector 'level'
        if(flag) {
            reverse(level.begin(), level.end());
        }
        // Push vector 'level' into vector of vector 'ans'
        ans.push_back(level);
        // Toggle value of flag
        flag ^= 1;
    }
    return ans;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    vector<vector<int> > ans = zigZagTraversal(root);

    cout<<"ZigZagTraversal : [ "<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<"[ ";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }
    cout<<"]"<<endl;
    return 0;
}

//Method 2
/*#include<bits/stdc++.h>

using namespace std;

class Node {
  public:
    int val;
  Node * left, * right;
};

vector < vector < int >> zigzagLevelOrder(Node * root) {
  vector < vector < int >> result;
  if (root == NULL) {
    return result;
  }

  queue < Node * > nodesQueue;
  nodesQueue.push(root);
  bool leftToRight = true;

  while (!nodesQueue.empty()) {
    int size = nodesQueue.size();
    vector < int > row(size);
    for (int i = 0; i < size; i++) {
      Node * node = nodesQueue.front();
      nodesQueue.pop();

      // find position to fill node's value
      int index = (leftToRight) ? i : (size - 1 - i);

      row[index] = node -> val;
      if (node -> left) {
        nodesQueue.push(node -> left);
      }
      if (node -> right) {
        nodesQueue.push(node -> right);
      }
    }
    // after this level
    leftToRight = !leftToRight;
    result.push_back(row);
  }
  return result;
}
Node * newNode(int data) {
  Node * node = new Node;
  node -> val = data;
  node -> left = NULL;
  node -> right = NULL;
  return node;
}
int main() {
  int i, j;
  Node * root = newNode(3);
  root -> left = newNode(9);
  root -> right = newNode(20);
  root -> right -> left = newNode(15);
  root -> right -> right = newNode(7);
  vector < vector < int >> ans;
  ans = zigzagLevelOrder(root);
  cout << "Zig Zag Traversal of Binary Tree" << endl;
  for (i = 0; i < ans.size(); i++) {
    for (j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}*/