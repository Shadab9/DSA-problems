class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c1=-1,c2=-1,count1=0,count2=0;
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            if(nums[i]==c1)
            {
                count1++;
            }
            else
            if(nums[i]==c2)
            {
                count2++;
            }
            else 
            if(count1==0)
            {
                count1=1;
                c1=nums[i];
            }
            else
            if(count2==0)
            {
                count2=1;
                c2=nums[i];
            }
            else
            {
                count1--;
                count2--;
            }
        }
        int tc1=0,tc2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==c1)
                tc1++;
            if(nums[i]==c2)
                tc2++;
        }
        vector<int>ans;
        if(tc1>nums.size()/2)
            ans.push_back(c1);
        if(tc2>nums.size()/2)
            ans.push_back(c2);
        return ans[0];
    }
};