#include <bits/stdc++.h>
using namespace std;
class TreeNode{
   public:
      int val;
      TreeNode *left, *right;
      TreeNode(int data){
         val = data;
         left = NULL;
         right = NULL;
      }
};
void insert(TreeNode **root, int val){
   queue<TreeNode*> q;
   q.push(*root);

   while(!q.empty()){
      TreeNode *temp = q.front();
      q.pop();
      if(!temp->left){
         if(val != NULL)
            temp->left = new TreeNode(val);
         else
            temp->left = new TreeNode(0);
         return;
      }
      else{
         q.push(temp->left);
      }
      if(!temp->right){
         if(val != NULL)
            temp->right = new TreeNode(val);
         else
            temp->right = new TreeNode(0);
         return;
      }
      else{
         q.push(temp->right);
      }
   }


}
TreeNode *make_tree(vector<int> v){
   TreeNode *root = new TreeNode(v[0]);
   for(int i = 1; i<v.size(); i++){
      insert(&root, v[i]);
   }
   return root;
}
class Solution {
public:
   bool isSameTree(TreeNode *p, TreeNode* q){
      if (p == NULL && q == NULL)
         return true;
      if (p == NULL || q == NULL)
         return false;
      if (p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right))
         return true;
      return false;
   }
};



main(){
   Solution ob;
   vector<int> v = {1,2,3}, v1 = {1,2,3};
   TreeNode *root1 = make_tree(v);
   TreeNode *root2 = make_tree(v1);
   cout << (ob.isSameTree(root1, root2));
}









Input
{1,2,3}, {1,2,3}
Output
1
