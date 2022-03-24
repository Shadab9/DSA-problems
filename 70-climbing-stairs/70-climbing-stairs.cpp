class Solution {
public:
    int climbStairsUtil(int n,vector<int>&dp)
    {
        if(dp[n]!=-1)
            return dp[n];
        if(n==1 or n==2)
            return n;
        int opt1=climbStairsUtil(n-1,dp);
        int opt2=climbStairsUtil(n-2,dp);
        return dp[n]=opt1+opt2;
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return climbStairsUtil(n,dp);  
    }
};