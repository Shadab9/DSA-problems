class Solution {
public:
     int dp[102];
    int solve(string &s, int idx){
        if(idx==s.size()) return 1;
        if(idx>s.size()) return 0;
        
        if(dp[idx]!=-1) return dp[idx];
        
        int count = 0;
        for(int j=idx; j<idx+2; ++j){
            string curS = s.substr(idx,j-idx+1);
            int curN = stoi(curS);
            if(curS[0]!='0' and curN>0 and curN<=26){
                count += solve(s,j+1);
            }
        }
        return dp[idx] = count;
    }
    
    int numDecodings(string s) {
        memset(dp,-1,sizeof(dp));
        return solve(s,0);
    }                                                        
};