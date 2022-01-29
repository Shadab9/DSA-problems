class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,right=nums.size()-1;
        while(low<right)
        {
            int mid=(low+right)/2;
            if(nums[low]<nums[right])
                return nums[low];
            else if(nums[mid]>nums[right])
                low=mid+1;
            else
                right=mid;
        }
        return nums[low];
    }
};