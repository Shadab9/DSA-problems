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
    
    
    
    
    bool hasCycle(ListNode *head) {
        if(head==nullptr or head->next==nullptr)
            return 0;
        ListNode* slow=head,*fast=head;
        while(fast and fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                return 1;
        }
        return 0;
        
    }
};