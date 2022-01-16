class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        int s=1,p=1;
        for(int i=0;i<n;i++)
        {
            ans[i]*=s;
            s*=nums[i];
            ans[n-i-1]*=p;
            p*=nums[n-i-1];
        }
        return ans;
    }
};