class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count1=0,count2=0,c1=-1,c2=-1;
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            if(c1==nums[i])
            {
                count1++;
            }
            else if(c2==nums[i])
                count2++;
            else if(count1==0)
            {
                c1=nums[i];
                count1=1;
            }
            else if(count2==0)
            {
                c2=nums[i];
                count2=1;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        int x=0,y=0;
        for(int i=0;i<size;i++)
        {
            if(c1==nums[i])
                x++;
            if(c2==nums[i])
                y++;
        }
        vector<int>ans;
        if(x>nums.size()/2)
            ans.push_back(c1);
        if(y>nums.size()/2)
            ans.push_back(c2);
        return ans[0];
    }
};