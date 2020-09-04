 bool isPalindrome(ListNode* head) {
        if(head==NULL){
            return true;
        }
        stack<int> s;
        ListNode *p=head;
        while(p!=NULL){
            s.push(p->val);
            p=p->next;
        }
       p=head;
        while(!s.empty()){
            int i= s.top();
            s.pop();
            if(i==p->val){
                p=p->next;
            }else{
                return false;
            }
            
        }
     return true;   
        
    }
