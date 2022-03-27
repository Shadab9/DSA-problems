class Solution {
public:
    int lengthUtil(vector<int>&nums,int start,int prev,vector<vector<int>>&dp)
    {
        if(prev!=-1 and dp[prev][start]!=-1)
            return dp[prev][start];
        if(start>=nums.size())
        {
            return 0;
        }
        
        int opt1=-1,opt2=-1;
        if(prev==-1 or nums[start]>nums[prev])
           opt1=1+lengthUtil(nums,start+1,start,dp);
        
        opt2=lengthUtil(nums,start+1,prev,dp);
        if(prev!=-1)
            dp[prev][start]=max(opt1,opt2);
        return max(opt1,opt2);
    }
    int lengthOfLIS(vector<int>& nums) {
        int prev=-1,start=0;
        vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        return lengthUtil(nums,start,prev,dp);
    }
};