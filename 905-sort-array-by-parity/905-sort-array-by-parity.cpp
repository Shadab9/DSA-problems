class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int k=0;
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            if(nums[i]%2==0)
            swap(nums[k++],nums[i]);
        }
        return nums;
    }
};