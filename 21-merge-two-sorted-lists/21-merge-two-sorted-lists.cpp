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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr and list2==nullptr)
            return nullptr;
        if(list1==nullptr)
            return list2;
        if(list2==nullptr)
            return list1;
        ListNode* dummy1=list1,*dummy2=list2;
        ListNode* dummy3=new ListNode(-1);
        ListNode* result=dummy3;
        while(dummy1!=nullptr and dummy2!=nullptr)
        {
            if(dummy1->val<=dummy2->val)
            {
                dummy3->next=dummy1;
                dummy1=dummy1->next;
            }
            else if(dummy1->val>dummy2->val)
            {
                dummy3->next=dummy2;
                dummy2=dummy2->next;
            }
            dummy3=dummy3->next;
        }
        if(dummy1)
           dummy3->next=dummy1;
        if(dummy2)
           dummy3->next=dummy2;
        
        return result->next;
    }
};