class Solution {
public:
    void subset(vector<int>&nums,int start,vector<int>&temp,vector<vector<int>>&result)
    {
        result.push_back(temp);
        for(int i=start;i<nums.size();i++)
        {
            if(i>start and nums[i]==nums[i-1])
                continue;
            temp.push_back(nums[i]);
            subset(nums,i+1,temp,result);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        vector<int>temp;
        subset(nums,0,temp,result);
        return result;
    }
};