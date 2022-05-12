class Solution {
   void permuteUtil(vector<int>&nums,int start,int end,vector<vector<int>>&result)
    {
        if(start>=end)
        {
            result.push_back(nums);
            return;
        }
        unordered_set<int>mp;
        for(int i=start;i<end;i++)
        {
            if(mp.find(nums[i])!=mp.end())
                continue;
            swap(nums[start],nums[i]);
            permuteUtil(nums,start+1,end,result);
            swap(nums[start],nums[i]);
            mp.insert(nums[i]);
        }
    }
        
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());
        permuteUtil(nums,0,nums.size(),result);
        return result;
    }
};