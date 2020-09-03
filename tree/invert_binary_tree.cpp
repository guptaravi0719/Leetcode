

Invert Binary Tree

Easy

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




/////////////////////////////////////////////////////////////////////////////////////////////////////////
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        
        if(root==NULL){
            return NULL;
        }
        
       invertTree(root->left);
        invertTree(root->right);
        
        TreeNode* temp;
        temp=root->right;
        root->right=root->left;
        
        root->left=temp;
        
     return root;   
    }
    
    
};
