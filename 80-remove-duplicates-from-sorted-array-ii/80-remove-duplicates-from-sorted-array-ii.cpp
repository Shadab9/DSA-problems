class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        
        int k=1;
        int j=nums[0];
        int count=1;
        for(int i=1;i<nums.size();)
        {
            if(nums[i]==j and count<2)
            {
                count++;
                nums[k++]=nums[i];
                i++;
            }
            else if(nums[i]==j)
            {
                i++;
            }
            else
            {
                nums[k++]=nums[i];
                j=nums[i];
                count=1; 
                i++;
            }
        }
        return k;
        
        
    }
};