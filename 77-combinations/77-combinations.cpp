class Solution {
public:
    void combineUtil(vector<int>dp,int s,int n,int k,vector<int>& temp,vector<vector<int>>& result)
    {
        if(k==0)
        {
            result.push_back(temp);
            return;
        }
        if(s==n)
            return;
        for(int i=s;i<n;i++)
        {
            temp.push_back(dp[i]);
            combineUtil(dp,i+1,n,k-1,temp,result);
            temp.pop_back();
        
        }
    }
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>>result;
        vector<int>dp(n);
        for(int i=0;i<n;i++)
            dp[i]=i+1;
        
        vector<int>temp;
        combineUtil(dp,0,n,k,temp,result);
        return result;
        
        
    }
};