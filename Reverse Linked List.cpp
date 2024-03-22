/*
Given the head of a singly linked list, reverse the list, and return the reversed list.

Example:
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
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
    ListNode* reverseList(ListNode* head) {
        ListNode *p,*c,*n;
        p=NULL;
        c=head;
        while(c!=NULL)
        {
            n=c->next;
            c->next = p;
            p=c;
            c=n;
        }
        head = p;
        return(head);
    }
};
