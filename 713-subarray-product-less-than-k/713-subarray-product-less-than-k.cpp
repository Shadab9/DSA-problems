class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)
            return 0;
        int size=nums.size();
        int prod=1,start=0,ans=0;
        for(int i=0;i<size;i++)
        {
            prod*=nums[i];
            while(prod>=k)
            {
                prod/=nums[start++];
            }
            ans+=(i-start+1);
        }
        return ans;
    }
};