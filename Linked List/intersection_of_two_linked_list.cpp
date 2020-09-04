160. Intersection of Two Linked Lists
Easy

Write a program to find the node at which the intersection of two singly linked lists begins.

For example, the following two linked lists:


begin to intersect at node c1.

 

Example 1:



Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
Output: Reference of the node with value = 8
Input Explanation: The intersected node's value is 8 (note that this must not be 0 if the two lists intersect). From the head of A, it reads as [4,1,8,4,5]. From the head of B, it reads as [5,6,1,8,4,5]. There are 2 nodes before the intersected node in A; There are 3 nodes before the intersected node in B.
 

Example 2:


Input: intersectVal = 2, listA = [1,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1
Output: Reference of the node with value = 2
Input Explanation: The intersected node's value is 2 (note that this must not be 0 if the two lists intersect). From the head of A, it reads as [1,9,1,2,4]. From the head of B, it reads as [3,2,4]. There are 3 nodes before the intersected node in A; There are 1 node before the intersected node in B.
 

Example 3:


Input: intersectVal = 0, listA = [2,6,4], listB = [1,5], skipA = 3, skipB = 2
Output: null
Input Explanation: From the head of A, it reads as [2,6,4]. From the head of B, it reads as [1,5]. Since the two lists do not intersect, intersectVal must be 0, while skipA and skipB can be arbitrary values.
Explanation: The two lists do not intersect, so return null.
 

Notes:

If the two linked lists have no intersection at all, return null.
The linked lists must retain their original structure after the function returns.
You may assume there are no cycles anywhere in the entire linked structure.
Each value on each linked list is in the range [1, 10^9].
Your code should preferably run in O(n) time and use only O(1) memory.




//////////////////////////////////////////////////////////////////////////////////////////////////
// Easy Solution 
 ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL||headB==NULL){
            return NULL;
        }
        ListNode* p1=headA;
        ListNode* p2=headB;
        int l1=0,l2=0;
      while(p1!=NULL){
          l1++;
          p1=p1->next;
         }
         while(p2!=NULL){
             l2++;
             p2=p2->next;
         }
         p1=headA;
         p2=headB;
         int diff=abs(l1-l2);
        
        if(l1>l2){
            while(diff>0){
                p1=p1->next;
                diff-=1;
            }
            
            
        }
        else if(l2>l1){
               while(diff>0){
                p2=p2->next;
                diff-=1;
            }
            
        }
         
       while(p1!=NULL&&p2!=NULL){
           if(p1==p2){
               return p1;
           }
           p1=p1->next; 
            p2=p2->next;
       }
       
        return NULL;
        
        
        
        
        
        
        
        
    }


// m1 .//////////////////////////////////////////////////////////////////////////////////////////
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL){
            return NULL;
        }
        ListNode* pa = headA;
        ListNode* pb = headB;

      while (pa != pb) {    
        pa = pa->next;
        pb = pb->next;

        if (pa == pb) return pa;

        if (pa == NULL) pa = headB;

        if (pb == NULL) pb = headA;
      }

      return pa;       
        
    }

///////Method 2


// C++ program to get intersection point of two linked list 
#include <bits/stdc++.h> 
using namespace std; 
  

class Node { 
public: 
    int data; 
    Node* next; 
}; 
  

int getCount(Node* head); 
  

int _getIntesectionNode(int d, Node* head1, Node* head2); 
  

int getIntesectionNode(Node* head1, Node* head2) 
{ 
  

    int c1 = getCount(head1); 
    int c2 = getCount(head2); 
    int d; 
  

    if (c1 > c2) { 
        d = c1 - c2; 
        return _getIntesectionNode(d, head1, head2); 
    } 
    else { 
        d = c2 - c1; 
        return _getIntesectionNode(d, head2, head1); 
    } 
} 
  

int _getIntesectionNode(int d, Node* head1, Node* head2) 
{ 

    Node* current1 = head1; 
    Node* current2 = head2; 
  
  
    for (int i = 0; i < d; i++) { 
        if (current1 == NULL) { 
            return -1; 
        } 
        current1 = current1->next; 
    } 
  

    while (current1 != NULL && current2 != NULL) { 
        if (current1 == current2) 
            return current1->data; 
  
    
        current1 = current1->next; 
        current2 = current2->next; 
    } 
  
    return -1; 
} 
  

int getCount(Node* head) 
{ 
    Node* current = head; 
  
    
    int count = 0; 
  

    while (current != NULL) { 
  
       
        count++; 
  
  
        current = current->next; 
    } 
  
    return count; 
} 
  
// Driver Code 
int main() 
{ 

  
    Node* newNode; 
  
  
    Node* head1 = new Node(); 
    head1->data = 10; 
  
    Node* head2 = new Node(); 
    head2->data = 3; 
  
    newNode = new Node(); 
    newNode->data = 6; 
    head2->next = newNode; 
  
    newNode = new Node(); 
    newNode->data = 9; 
    head2->next->next = newNode; 
  
    newNode = new Node(); 
    newNode->data = 15; 
    head1->next = newNode; 
    head2->next->next->next = newNode; 
  
    newNode = new Node(); 
    newNode->data = 30; 
    head1->next->next = newNode; 
  
    head1->next->next->next = NULL; 
  
    cout << "The node of intersection is " << getIntesectionNode(head1, head2); 
} 
  






