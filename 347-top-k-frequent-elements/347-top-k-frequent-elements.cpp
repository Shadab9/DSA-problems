class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>result;
        priority_queue<pair<int,int>>q;
        unordered_map<int,int>mp;
        for(auto i:nums)
            mp[i]++;
        for(auto i:mp)
        {
            q.push({i.second,i.first});
        }
        while(k--)
        {
            result.push_back(q.top().second);
            q.pop();
        }
        return result;
    }
};