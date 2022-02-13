class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)
            return 0;
        
        int size=nums.size();
        int prod=1,st=0,ans=0;
        for(int i=0;i<size;i++)
        {
            prod*=nums[i];
            while(prod>=k)
            {
                prod/=nums[st++];
            }
            ans+=(i-st+1);
        }
        return ans;
    }
};