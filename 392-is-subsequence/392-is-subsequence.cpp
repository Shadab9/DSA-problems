class Solution {
public:
    bool isSubsequence(string s, string t) {
        // int s_size=s.size();
        // int t_size=t.size();
        // int dp[s_size+1][t_size+1];
        // for(int i=0;i<=s_size;i++)
        // {
        //     for(int j=0;j<=t_size;j++)
        //     {
        //         if(i==0 or j==0)
        //             dp[i][j]=0;
        //         else
        //         if(s[i-1]==t[j-1])
        //             dp[i][j]=1+dp[i-1][j-1];
        //         else
        //             dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        //     }
        // }
        // return s_size==dp[s_size][t_size];
        int l=0;
        int r=0;
        while(l<s.length() and r<t.length())
        {
            if(s[l]==t[r])
            {
                l++;
                r++;
            }
            else
                r++;
        }
        if(l==s.length())return true;
        return false;
    }
};