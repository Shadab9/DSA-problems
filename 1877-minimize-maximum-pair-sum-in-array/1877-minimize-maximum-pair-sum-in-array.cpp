class Solution {
public:
    int minPairSum(vector<int>& nums) {
         int l=0,r=nums.size()-1,maximum=-1;
        sort(nums.begin(),nums.end());
        while(l<r)
        {
            maximum=max(maximum,nums[l]+nums[r]);
            l++;
            r--;
        }
        return maximum;
    }
};