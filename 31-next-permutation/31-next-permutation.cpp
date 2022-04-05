class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind1=-1,ind2=-1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1])
                ind1=i;
        }
        if(ind1!=-1)
        {
            for(int i=nums.size()-1;i>=0;i--)
            {
                if(nums[i]>nums[ind1])
                {
                    ind2=i;
                    break;
                }
            }
        }
        if(ind1!=-1 and ind2!=-1)
        swap(nums[ind1],nums[ind2]);
        reverse(nums.begin()+ind1+1,nums.end());
    }
};