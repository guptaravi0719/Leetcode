206. Reverse Linked List
Easy

Reverse a singly linked list.

Example:

Input: 1->2->3->4->5->NULL
Output: 5->4->3->2->1->NULL
Follow up:

A linked list can be reversed either iteratively or recursively. Could you implement both?

////////////////////////////// / ///// / / //////////////////////////////////////////////////////




  ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return NULL;
   ListNode* first;
        ListNode* second; 
        ListNode* third; 
        first = second = NULL;
        third = head;
        while(third)        //o(1) space
        {
            first = second;
            second = third;
            third = third -> next;
            second -> next = first;
        }
        return second;   
    }
