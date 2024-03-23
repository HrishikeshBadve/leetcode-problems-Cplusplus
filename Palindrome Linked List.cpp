/*
Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

Example:
Input: head = [1,2,2,1]
Output: true
*/

/*
Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
};
*/
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow,*fast;
        slow=head;
        fast=head;
        while(fast!=NULL && fast->next != NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        
        fast=head;
        ListNode *p,*c,*n;
        p=NULL;
        c=slow;
        while(c!=NULL)
        {
            n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        slow = p;
        while(fast!=NULL && slow!=NULL)
        {
            if(fast->val != slow->val)
            {
                return false;
            }
            fast=fast->next;
            slow=slow->next;
        }
        return true;
    }
};
