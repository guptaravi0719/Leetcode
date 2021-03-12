

class Solution
{
    public:
    vector<int> levelOrder(Node* node)
    {
   queue<Node*> q;
    vector<int> ans;
    q.push(node);
    while(!q.empty()){
        Node* front=  q.front();
        ans.push_back(q.front()->data);
        q.pop();
        if(front->left){
            q.push(node->left);
        }
        if(front->right){
            q.push(front->right);
        }
    }
        
        
        return ans;
        
      //Your code here
    }
};
