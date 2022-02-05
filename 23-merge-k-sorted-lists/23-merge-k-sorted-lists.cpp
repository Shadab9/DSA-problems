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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
            return nullptr;
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>>pq;
        for(auto it:lists)
        {
           ListNode* curr=it;
            while(curr!=nullptr)
            {
                pq.push({curr->val,curr});
                curr=curr->next;
            }
        }
        if(pq.size()==0)
            return nullptr;
        ListNode* dummy=new ListNode(0);
        ListNode* result=dummy;
        while(!pq.empty())
        {
            auto it=pq.top();
            dummy->next=it.second;
            pq.pop();
            dummy=dummy->next;
        }
        dummy->next=NULL;
        return result->next;
    }
};