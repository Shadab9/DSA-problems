class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int size=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<size;i++)
            mp[nums[i]]=1;
        int ans=0;
        for(int i=0;i<size;i++)
        {
            if(mp[nums[i]-1]==1)
                continue;
            int count=0;
            int value=nums[i];
            while(mp[value]==1)
            {
                count++;
                value+=1;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};