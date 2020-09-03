


19. Remove Nth Node From End of List
Medium

Given a linked list, remove the n-th node from the end of list and return its head.

Example:

Given linked list: 1->2->3->4->5, and n = 2.

After removing the second node from the end, the linked list becomes 1->2->3->5.
Note:

Given n will always be valid.

////////////////////////////////////////////////////////////////////////////////////////////////////////
 ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL||head->next==NULL){
            return NULL;
        }
        //nth from end is head.length-n+1 th from begining
        int length=1;
        ListNode *p=head;
        ListNode *prev=head;
        while(p->next!=NULL){
            length++;
            p=p->next;
        }
        
        
        
        int diff=length-n;
        if(diff==0){
            return head->next;
        }
      while(--diff){
          prev=prev->next;
         
          
      }
        
      prev->next=prev->next->next;
        
        
        
        
      return head;  
    }
