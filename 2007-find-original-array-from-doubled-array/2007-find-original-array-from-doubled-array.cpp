class Solution {
private:
    vector<int> findOriginalArrayUtil(vector<int>&changed)
    {
        unordered_map<int,int>mp;
        vector<int>result;
        for(auto i:changed)
            mp[i]++;
        for(auto i:changed)
        {
            if(mp[i]==0)
                continue;
            mp[i]--;

            if(mp[2*i]>0)
            {
                mp[2*i]--;
                result.push_back(i);
            }
            else
            {
                return {};
            }
        }
        return result;
    }
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int>result;
        sort(changed.begin(),changed.end());
        return findOriginalArrayUtil(changed);
    }
};