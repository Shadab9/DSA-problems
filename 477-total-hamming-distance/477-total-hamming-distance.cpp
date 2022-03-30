class Solution {
public:
    
    int totalHammingDistance(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<32;i++)
        {
            int count1=0,count0=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]&(1<<i))
                    count1++;
                else
                    count0++;
            }
            ans+=count1*count0;
        }
        return ans;     
    }
};