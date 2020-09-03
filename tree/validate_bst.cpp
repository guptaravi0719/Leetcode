
///////////////////////////////////////////////////////////////////////////////////////////////////////
//class Solution {
//public:
//     bool isValidBST(TreeNode* root) {
//         if(root==NULL)
//             return true;
//       return (  isValidBST(root->left)&&isValidBST(root->right));
        
//         if(root->left->val < root->val && root->val<root->right->val){
//             return true;
//         }
//         return false;
        
        
//     

Method 1: Inorder traversal
    
    vector<int> tree;
      void inorder(TreeNode *root)   //inorder traversal of bst gives sorted elements allways
    {
        if (root==NULL)
            return;
        inorder(root->left);
        tree.push_back(root->val);
        inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        inorder(root);
        for (int i=1;i<tree.size();++i)
        {
            if (tree[i-1]>=tree[i])
                return false;
        }
        return true;
        
    }
