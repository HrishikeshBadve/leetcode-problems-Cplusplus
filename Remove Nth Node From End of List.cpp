/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.

Example:
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL)
        {
            head=NULL;
        }
        else
        {
            ListNode *Dummy = new ListNode();
            Dummy->val=0;
            Dummy->next=head;
            ListNode *Left=Dummy;
            ListNode *Right=head;
            while(n>0 && Right)
            {
                Right=Right->next;
                n--;
            }
            while(Right != NULL)
            {
                Left=Left->next;
                Right=Right->next;
            }
            if(Left==Dummy)
            {
                head=head->next;
            }
            else
            {
                Left->next=Left->next->next;  
            }
        }
        return(head);
    }
};
