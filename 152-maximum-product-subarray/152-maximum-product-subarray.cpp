class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int size=nums.size();
        int ans=INT_MIN,mx=1,mn=1;
        for(int i=0;i<size;i++)
        {
            if(nums[i]<0)
                swap(mx,mn);
            mx=max(nums[i],mx*nums[i]);
            mn=min(nums[i],mn*nums[i]);
            ans=max(ans,mx);
        }
        return ans;
    }
    
    
    
    
};