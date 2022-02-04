class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int count=0;
        int result=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            count+=nums[i]==1?1:-1;
            if(count==0)
                result=max(result,i+1);
            if(mp.find(count)==mp.end())
                mp[count]=i;
            else
                result=max(result,i-mp[count]);
        }
        // if(result==INT_MIN)
        //     return 0;
        return result;
    }
};