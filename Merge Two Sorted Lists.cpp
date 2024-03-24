/*
You are given the heads of two sorted linked lists list1 and list2.
Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.
Return the head of the merged linked list.

Example:
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)
        {
            return list2;
        }
        if(list2 == NULL)
        {
            return list1;
        }
        ListNode *newhead;
        if(list1!=NULL && list2!=NULL)
        {
            if(list1->val < list2->val)
            {
                newhead=list1;
                list1=list1->next;
            }
            else
            {
                newhead=list2;
                list2=list2->next;
            }
        }
        ListNode *temp = newhead;
        while(list1!=NULL && list2!=NULL)
        {
            if(list1->val < list2->val)
            {
                temp->next=list1;
                list1=list1->next;
                temp=temp->next;
            }
            else
            {
                temp->next=list2;
                list2=list2->next;
                temp=temp->next;
            }
        }
        while(list1!=NULL)
        {
            temp->next=list1;
            list1=list1->next;
            temp=temp->next;
        }
        while(list2!=NULL)
        {
            temp->next=list2;
            list2=list2->next;
            temp=temp->next;
        }
        temp->next=NULL;
        return(newhead);
    }
};
