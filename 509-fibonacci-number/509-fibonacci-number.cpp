class Solution {
public:
    int fibUtil(int n,vector<int>&dp)
    {
        if(n<=1)
            return n;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=fibUtil(n-1,dp)+fibUtil(n-2,dp);
    }
    int fib(int n) {
        vector<int>dp(n+1,-1);
        return fibUtil(n,dp);
    }
};