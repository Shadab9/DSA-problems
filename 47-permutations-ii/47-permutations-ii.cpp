class Solution {
    void permuteUtil(vector<int>&nums,int st,vector<vector<int>>&result)
    {
        if(st==nums.size())
        {
            result.push_back(nums);
            return;
        }
        unordered_set<int>mp;
        for(int j=st;j<nums.size();j++)
        {
            if(mp.find(nums[j])!=mp.end()) continue;
            // if(j>st and nums[j]==nums[j-1])
            //     continue;
            swap(nums[st],nums[j]);
            permuteUtil(nums,st+1,result);
            swap(nums[st],nums[j]);
            mp.insert(nums[j]);
        }
        
    }
        
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());
        permuteUtil(nums,0,result);
        vector<vector<int>>result1;
        
        for(auto it:result)
        {
            result1.push_back(it);
            
        }
        return result1;
    }
};