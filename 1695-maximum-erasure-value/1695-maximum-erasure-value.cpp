class Solution {
public:
    
    
     
    
    
    int maximumUniqueSubarray(vector<int>& nums) {
        int sum=0;
        int size=nums.size();
        int start=0,max_sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<size;i++)
        {
            mp[nums[i]]+=1;
            if(mp[nums[i]]<=1)
            sum+=nums[i];
            else
            {
                while(mp[nums[i]]>1)
                {
                    sum-=nums[start];
                    mp[nums[start]]-=1;
                    start++;
                }
                sum+=nums[i];
            }   
            max_sum=max(max_sum,sum);
        }
        return max_sum;
    }
};