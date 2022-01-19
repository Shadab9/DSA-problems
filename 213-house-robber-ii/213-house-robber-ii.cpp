class Solution {
public:
    int dp[101];
    int robUtil(vector<int>&nums,int start,int end)
    {
        if(start>end)
            return 0;
        if(dp[start]!=-1)
            return dp[start];
        int first_case=nums[start]+robUtil(nums,start+2,end);
        int second_case=robUtil(nums,start+1,end);
        return dp[start]=max(first_case,second_case);
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        memset(dp,-1,sizeof(dp));
        int first_case=robUtil(nums,0,nums.size()-2);
        memset(dp,-1,sizeof(dp));
        int second_case=robUtil(nums,1,nums.size()-1);
        return max(first_case,second_case);
    }
};