class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int c=0;
       unordered_map<int,int>mp;
        for(auto it=0;it<nums.size();it++)
        {
            mp[nums[it]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]>0 and mp[k-nums[i]]>0)
            {
                if(nums[i]==k-nums[i] and mp[nums[i]]>=2)
                {
                    mp[nums[i]]--;
                    mp[k-nums[i]]--;
                    c++;
                }
                else if(nums[i]!=k-nums[i])
                {
                    mp[nums[i]]--;
                    mp[k-nums[i]]--;
                    c++;
                }
            }
        }
        return c;
    }
};