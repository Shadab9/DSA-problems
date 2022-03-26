class Solution {
public:
    int findUtil(vector<int>&nums,int start,int target,int sum,vector<vector<int>>&dp)
    {
        if(start>=nums.size())
        {
            if(sum==target or sum==-target)
                return 1;
            return 0;
        }
        if(dp[start][abs(sum)]!=-1)
            return dp[start][abs(sum)];
        int opt1=findUtil(nums,start+1,target,sum+nums[start],dp);
        int opt2=findUtil(nums,start+1,target,sum-nums[start],dp);
        return dp[start][abs(sum)]=opt1+opt2;
        
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        
        
        int sum=0; 
        int tempsum=0;
        for(int i=0;i<nums.size();i++)
            tempsum+=nums[i];
        vector<vector<int>>dp(nums.size()+2,vector<int>(tempsum+2,-1));
        int ans=findUtil(nums,0,target,sum,dp);
        return target==0?ans:ans/2;
    }
};