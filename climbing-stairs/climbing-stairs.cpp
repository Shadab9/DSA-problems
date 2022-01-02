class Solution {
public:
    int climbStairsUtil(int n,vector<int>&dp)
    {
        
        if(n==1)
            return dp[1]=1;
        if(n==2)
            return dp[2]=2;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=climbStairsUtil(n-1,dp)+climbStairsUtil(n-2,dp);
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        climbStairsUtil(n,dp);
        return dp[n];
    }
};