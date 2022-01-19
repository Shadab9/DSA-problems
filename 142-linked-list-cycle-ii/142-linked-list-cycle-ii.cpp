/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr or head->next==nullptr)
            return nullptr;
        ListNode* slow=head,*fast=head;
        while(fast and fast->next)
        {
            if(slow->next==fast->next->next)
            {
                slow=slow->next;
                fast=fast->next->next;
                break;
            }
            slow=slow->next;
            fast=fast->next->next;
        }
        if(slow==fast)
        {
            slow=head;
            while(slow!=fast)
            {
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }
        return nullptr;
    }
};