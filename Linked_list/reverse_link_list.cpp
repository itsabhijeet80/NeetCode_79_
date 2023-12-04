/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 
 //Iterative Solution
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL,*curr=head,*next;

        while(curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev
    }
};

//Recursive Solution
class Solution {
public:
    ListNode* reverse(ListNode* head)
    {
        if(head==NULL||head->next==NULL)return head;
        ListNode* newhead=reverse(head->next);
        ListNode* headnext=head->next;
        headnext->next=head;
        head->next=NULL;
        return newhead;
    }
    ListNode* reverseList(ListNode* head) {
        return reverse(head);
    }
};