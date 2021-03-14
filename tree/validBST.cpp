



98. Validate Binary Search Tree
Medium

5631

663

Add to List

Share
Given the root of a binary tree, determine if it is a valid binary search tree (BST).

A valid BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
 

Example 1:


Input: root = [2,1,3]
Output: true
Example 2:


Input: root = [5,1,4,null,null,3,6]
Output: false
Explanation: The root node's value is 5 but its right child's value is 4.
 


////////////////////////////////////////////////////////////////


    bool isBST(TreeNode* root, TreeNode* l=NULL, TreeNode* r=NULL)
{
    // Base condition
    if (root == NULL)
        return true;
 
    // if left node exist then check it has
    // correct data or not i.e. left node's data
    // should be less than root's data

    if (l != NULL and root->val <= l->val)
        return false;
 
    // if right node exist then check it has
    // correct data or not i.e. right node's data
    // should be greater than root's data

    if (r != NULL and root->val >= r->val)
        return false;
 
    // check recursively for every node.
    return isBST(root->left, l, root) and
           isBST(root->right, root, r);
}
   
    
    bool isValidBST(TreeNode* root) {
      if(root==NULL){
          return true;
      }   
return isBST(root,NULL,NULL);
        
    }





///////////////////////////////////////////////////////////////////////////

//Solution using inorder(inorder gives sorted bst)
class Solution {
public:
    vector<int> inorder{};
    void isValid1(TreeNode* root){
        if(root==NULL) return;
         isValid1(root->left);
        inorder.push_back(root->val);
        isValid1(root->right);
    }
    bool isValidBST(TreeNode* root) {
      if(root==NULL){
          return true;
      }   
       
     isValid1(root);   
    
    
    int count=0;
    
    if(inorder.size()==1){
        return true;
    }
    if(inorder.size()>1)
    for(int i=0;i<inorder.size()-1;i++){
        if(inorder[i]>=inorder[i+1]){
            count=1;
        }}
    if(count==1){
        return false;
        }
    return true;
    }
};
