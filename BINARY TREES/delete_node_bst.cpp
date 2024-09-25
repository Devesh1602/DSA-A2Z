/*This code defines a `Solution` class with a member function `deleteNode` that deletes a node with a given key from a binary search tree. Let's break down the code step by step:

1. The function `deleteNode` takes two arguments: a pointer to the root of the binary search tree (`TreeNode* root`) and an integer `key` representing the value of the node to be deleted.

2. Inside the function:
   - The first `if` statement `if(root)` checks if the current node (`root`) is not NULL.
   - If `root` is not NULL, it checks whether the `key` is less than (`<`) or greater than (`>`) the value of the current node (`root->val`). If `key` is less than the current node's value, it recursively calls `deleteNode` on the left subtree. If `key` is greater, it recursively calls `deleteNode` on the right subtree.
   - If the `key` matches the value of the current node (`else` block), it checks different conditions:
     - If the current node has no children (`!root->left && !root->right`), it returns `NULL`, indicating that the current node should be deleted.
     - If the current node has only one child (`!root->left || !root->right`), it returns the non-NULL child, effectively replacing the current node with its child.
     - If the current node has two children:
       - It finds the maximum value node (`temp`) in the left subtree (or the minimum value node in the right subtree) by traversing right (or left) until reaching a leaf node.
       - It copies the value of `temp` to the current node (`root->val = temp->val`).
       - It recursively deletes the node with the copied value from the left subtree (or right subtree).

3. Finally, it returns the modified root node.

Overall, this function effectively deletes the node with the given `key` from the binary search tree while maintaining the properties of a binary search tree.

class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root) 
            if(key < root->val) root->left = deleteNode(root->left, key);     //We frecursively call the function until we find the target node
            else if(key > root->val) root->right = deleteNode(root->right, key);       
            else{
                if(!root->left && !root->right) return NULL;          //No child condition
                if (!root->left || !root->right)
                    return root->left ? root->left : root->right;    //One child contion -> replace the node with it's child
					                                                //Two child condition   
                TreeNode* temp = root->left;                        //(or) TreeNode *temp = root->right;
                while(temp->right != NULL) temp = temp->right;     //      while(temp->left != NULL) temp = temp->left;
                root->val = temp->val;                            //       root->val = temp->val;
                root->left = deleteNode(root->left, temp->val);  //        root->right = deleteNode(root->right, temp);		
            }
        return root;
    }   
};
*/