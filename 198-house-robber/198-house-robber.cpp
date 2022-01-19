class Solution {
public:
    int robUtil(vector<int>&nums,int start,int end,vector<int>& dp)
    {
        if(dp[start]!=-1)
            return dp[start];
        if(start>end)
            return 0;
        
        int op1=nums[start]+robUtil(nums,start+2,end,dp);
        int op2=robUtil(nums,start+1,end,dp);
        return dp[start]=max(op1,op2);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(400,-1);
        
        return robUtil(nums,0,nums.size()-1,dp);
    }
};