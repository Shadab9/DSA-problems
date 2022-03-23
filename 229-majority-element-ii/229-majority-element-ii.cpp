class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1=-1;
        int num2=-1;
        int count1=0,count2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(num1==nums[i])
                count1++;
            else if(num2==nums[i])
                count2++;
            else if(count1==0)
            {
                num1=nums[i];
                count1=1;
            }
            else if(count2==0)
            {
                num2=nums[i];
                count2=1;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        int tc1=0,tc2=0;
        for(auto i=0;i<nums.size();i++)
        {
            if(nums[i]==num1)
                tc1++;
            else if(nums[i]==num2)
                tc2++;
        }
        vector<int>ans;
        int size=nums.size();
        if(tc1>size/3)
            ans.push_back(num1);
        if(tc2>size/3)
            ans.push_back(num2);
        return ans;
        
    }
};