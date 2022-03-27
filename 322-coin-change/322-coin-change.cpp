class Solution {
public:
    int coinChangeUtil(vector<int>&coins,int amount,vector<int>&dp)
    {
        if(amount==0)
            return 0;
        if(dp[amount]!=-1)
            return dp[amount];
        int ans=INT_MAX/2;
        for(int i=0;i<coins.size();i++)
        {
            if(amount>=coins[i])
            ans=min(ans,1+coinChangeUtil(coins,amount-coins[i],dp));
        }
        return dp[amount]=ans;
        
    }
    int coinChange(vector<int>& coins, int amount) {
        int size=coins.size();
        vector<int>dp(amount+1,-1);
        int ans=coinChangeUtil(coins,amount,dp);
        if(ans==INT_MAX/2)
            return -1;
        return ans;
    }
};