class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=INT_MIN;
        for(auto it:accounts)
        {
            int sum=0;
            for(auto it1:it)
                sum+=it1;
            ans=max(ans,sum);
        }
        return ans;
    }
};