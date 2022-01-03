class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        while(low<high)
        {
            int mid=(low+high)/2;
            if(nums[mid]<nums[mid+1])
                low=mid+1;
            else
                high=mid;
        }
        return low;
    }
};