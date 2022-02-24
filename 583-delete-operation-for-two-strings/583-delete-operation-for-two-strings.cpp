class Solution {
public:
    int minDistance(string word1, string word2) {
        int size1=word1.size(),size2=word2.size();
        int dp[size1+1][size2+1];
        for(int i=0;i<=size1;i++)
        {
            for(int j=0;j<=size2;j++)
            {
                if(i==0 or j==0)
                    dp[i][j]=0;
                else if(word1[i-1]==word2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        int first=size1-dp[size1][size2];
        int second=size2-dp[size1][size2];
        return first+second;
    }
};