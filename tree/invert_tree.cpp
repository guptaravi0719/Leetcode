226. Invert Binary Tree
Easy

4887

72

Add to List

Share
Invert a binary tree.

Example:

Input:

     4
   /   \
  2     7
 / \   / \
1   3 6   9
Output:

     4
   /   \
  7     2
 / \   / \
9   6 3   1






///////////////////////////////////////////////////////////////////////////////
TreeNode* invertTree(TreeNode* root) {
      
       if(root==NULL){
           return NULL;
       }
        swap(root->left,root->right);
        invertTree(root->left);
        invertTree(root->right);
    
    return root;
    }
