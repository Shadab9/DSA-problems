class Solution {
public:
     int dp[202][202];
    int solve(int l ,int r)
    {
        if(dp[l][r]!=-1)return dp[l][r];
        if(l>=r)return dp[l][r] = 0;
        int ans = 1000;
        for(int i = l ; i <= r ; i++)
            ans = min(ans , i + max(solve(l , i-1) , solve(i+1 , r)));
        return dp[l][r] = ans;
    }
    int getMoneyAmount(int n) {
        for(int i = 1 ; i <= 200 ; i++)
           for(int j = 1 ; j <= 200 ; j++)
               if(i == j)dp[i][j] = 0;
                else dp[i][j] = -1;
        return solve(1 , n);
    }
};