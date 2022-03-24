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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==nullptr and l2==nullptr)
            return nullptr;
        if(l1==nullptr and l2!=nullptr)
            return l2;
        if(l1!=nullptr and l2==nullptr)
            return l1;
        ListNode* dummy=new ListNode(0);
        ListNode* result=dummy;
        ListNode* first=l1,*second=l2;
        int sum=0,carry=0;
        while(first or second)
        {
            sum=0;
            if(first)
            {
                sum+=first->val;
                first=first->next;
            }
            if(second)
            {
                sum+=second->val;
                second=second->next;
            }
            sum+=carry;
            if(sum>=10)
            {
                sum=sum%10;
                carry=1;
            }
            else 
                carry=0;
            dummy->next=new ListNode(sum);
            dummy=dummy->next;
        }
        if(carry)
            dummy->next=new ListNode(1);
        return result->next;
    }
};