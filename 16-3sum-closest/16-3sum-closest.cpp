class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        int ans=INT_MIN;
        int diff=INT_MAX;
        for(int i=0;i<size;i++)
        {
            int j=i+1;
            int k=size-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(diff>=abs(target-sum))
                {
                    diff=abs(target-sum);
                    ans=sum;
                }
                if(sum==target)
                {
                   return sum;
                }
                else if(sum<target)
                {
                   
                    j++;
                }
                else if(sum>target)
                {
                    k--;
                }
            }
        }
        return ans;
    }
};