class Solution {
public:
    void help(vector<int>&nums,int st,int target,vector<int>&temp,vector<vector<int>>&result)
    {
        if(target==0 or st==nums.size())
        {
            if(target==0)
            {
                result.push_back(temp); 
            }
            return;
        }
        if(nums[st]<=target)
        {
            temp.push_back(nums[st]);
            help(nums,st,target-nums[st],temp,result);
            temp.pop_back();
            help(nums,st+1,target,temp,result);
        }
        else
        {
            help(nums,st+1,target,temp,result);
        }
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>temp;
        help(candidates,0,target,temp,result);
        return result;
    }
};