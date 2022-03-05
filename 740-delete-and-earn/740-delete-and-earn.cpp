class Solution {
public:
    int dp[10001];
    int houseRobber(vector<int>& arr, int i){
        if(i>=arr.size()) 
            return 0;
        if(dp[i] != -1) 
            return dp[i];
        return dp[i] = max(arr[i]+houseRobber(arr,i+2),houseRobber(arr,i+1));
    }
    int deleteAndEarn(vector<int>& nums) {
        memset(dp,-1,sizeof dp);
        vector<int> a(10001,0);
        for(auto num : nums) 
            a[num] += num;
        return houseRobber(a,0);
    }
};