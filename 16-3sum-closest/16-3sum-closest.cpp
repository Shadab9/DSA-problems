class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int size=nums.size();
        int result=INT_MAX,diff=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<size;i++)
        {
            int j=i+1;
            int k=size-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==target)
                    return sum;
                if(abs(sum-target)<=diff)
                {
                    diff=abs(sum-target);
                    result=sum;
                   
                }
                if(sum>target)
                    k--;
                else
                    j++;
                    
            }
        }
        return result;
    }
};