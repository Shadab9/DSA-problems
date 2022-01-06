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
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head==nullptr or head->next==nullptr)
            return head;
        ListNode* small=new ListNode(0);
        ListNode* smallHead=small;
        ListNode* fast=new ListNode(0);
        ListNode* curr=head,*fastHead=fast;
        while(curr)
        {
            if(curr->val<x)
            {
                small->next=curr;
                small=small->next;
            }
            else
            {
                fast->next=curr;
                fast=fast->next;
            }
            curr=curr->next;
        }
        fast->next=NULL;
        small->next=fastHead->next;
        return smallHead->next;
    }
};