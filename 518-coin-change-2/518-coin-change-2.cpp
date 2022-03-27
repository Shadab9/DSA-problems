class Solution {
public:
    int coinChange(int amount,int start,vector<int>&coins,vector<vector<int>>&dp)
    {
        
        if(start>=coins.size() or amount<=0)
        {
            if(amount==0)
                return 1;
            return 0;
        }
        if(dp[amount][start]!=-1)
            return dp[amount][start];
        int opt1=coinChange(amount-coins[start],start,coins,dp);
        int opt2=coinChange(amount,start+1,coins,dp);
        return dp[amount][start]=opt1+opt2;
    }
    int change(int amount, vector<int>& coins) {
        
        vector<vector<int>>dp(amount+1,vector<int>(coins.size()+1,-1));
        return coinChange(amount,0,coins,dp);
    }
};