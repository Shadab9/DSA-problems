class Solution {
public:
    static bool comp(string str1,string str2)
    {
        return str1.size()<str2.size();
    }
    bool check(string &s1, string &s2)
    {
        if(s1.size() != s2.size()-1)
            return false;
        
        int i=0,j=0,cnt=0;
        
        while(i<s1.size() and j < s2.size())
        {
        
            if(s1[i] == s2[j])
            {
                i++;
                j++;
            }
            else
            {
                cnt++;
                if(cnt==2)
                    return false;
                else
                    j++;
            }
        }
      
        return true;
    }
    int longestStrChain(vector<string>& words) {
        
        sort(words.begin(),words.end(),comp);
        int size=words.size();
        vector<int>dp(size,1);
        int ans=1;
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(check(words[j],words[i]))
                    dp[i]=max(dp[i],dp[j]+1);
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};