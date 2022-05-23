class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        int count0=0,count1=0;
        int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        for(auto it:strs)
        {
            count0=0;
            count1=0;
            for(auto it1:it)
            {
                if(it1=='0')
                    count0++;
                else
                    count1++;
            }
            for(int i=m;i>=count0;i--)
            {
                for(int j=n;j>=count1;j--)
                {
                    dp[i][j]=max(dp[i][j],dp[i-count0][j-count1]+1);
                }
            }
        }
        return dp[m][n];
    }
};