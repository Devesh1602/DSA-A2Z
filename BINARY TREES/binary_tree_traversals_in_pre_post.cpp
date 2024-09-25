//IN-ORDER TRAVERSAL
/*Algorithm of Inorder Traversal

Traverse the left subtree
Print the root
Traverse the right subtree


struct node {
  int data;
  struct node * left, * right;
  node(int val)
  {
    data=val;
    left=right=NULL;
  }
};

void inOrderTrav(node * curr, vector < int > & inOrder) {
  if (curr == NULL)
    return;

  inOrderTrav(curr -> left, inOrder);
  inOrder.push_back(curr -> data);
  inOrderTrav(curr -> right, inOrder);
}

//PRE-ORDER TRAVERSAL
Algorithm of Preorder Traversal

Print the root
Traverse the left subtree
Traverse the right subtree

struct node {
  int data;
  struct node * left, * right;
  node(int val)
  {
    data=val;
    left=right=NULL;
  }
};

void preOrderTrav(node * curr, vector < int > & preOrder) {
  if (curr == NULL)
    return;

  preOrder.push_back(curr -> data);
  preOrderTrav(curr -> left, preOrder);
  preOrderTrav(curr -> right, preOrder);
}

//POST-ORDER TRAVERSAL
Algorithm of Postorder Traversal

Traverse the left subtree
Traverse the right subtree
Print the root


struct node {
  int data;
  struct node * left, * right;
  node(int val)
  {
    data=val;
    left=right=NULL;
  }
};

void postOrderTrav(node * curr, vector < int > & postOrder) {
  if (curr == NULL)
    return;

  postOrderTrav(curr -> left, postOrder);
  postOrderTrav(curr -> right, postOrder);
  postOrder.push_back(curr -> data);
}*/