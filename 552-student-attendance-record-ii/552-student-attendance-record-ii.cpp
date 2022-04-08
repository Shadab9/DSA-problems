class Solution {
public:
    int mod=1e9+7;
    int dp[100001][2][3];
    int getRecord(int n,int l,int a)
    {
        if(l==3 or a==2)
            return 0;
        if(n==0)
            return 1;
        if(dp[n][a][l]!=-1)
            return dp[n][a][l];
        
        
        long op1=getRecord(n-1,0,a+1);
        long op2=getRecord(n-1,l+1,a);
        long op3=getRecord(n-1,0,a);
        
        return dp[n][a][l]=(op1+op2+op3)%mod;
    }
    int checkRecord(int n) {
        memset(dp,-1,sizeof(dp));
        return getRecord(n,0,0);
    }
};