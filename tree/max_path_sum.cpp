 


124. Binary Tree Maximum Path Sum

Hard

Given a non-empty binary tree, find the maximum path sum.

For this problem, a path is defined as any sequence of nodes from some starting node to any node in the tree along the parent-child connections. The path must contain at least one node and does not need to go through the root.

Example 1:

Input: [1,2,3]

       1
      / \
     2   3

Output: 6
Example 2:

Input: [-10,9,20,null,null,15,7]

   -10
   / \
  9  20
    /  \
   15   7

Output: 42




///////////////////////////////////////////////////////////////////////////////////////////////////////









int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        dfs(root,ans);
        return ans;
    }
    int dfs(TreeNode* root, int &ans)
    {
        if(!root) return 0;
        int l=max(0,dfs(root->left,ans));
        int r=max(0,dfs(root->right,ans));      
        ans=max(ans, root->val+l+r);
        return root->val + max(l,r);
    }
