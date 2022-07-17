class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<size;i++)
        {
            mp[nums[i]]+=1;
            if(mp[nums[i]]>1)
                return true;
        }
        return false;
    }
};