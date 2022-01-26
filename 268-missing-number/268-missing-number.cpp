class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        for(int i=0;i<nums.size()+1;i++)
        {
            if(freq[i]==0)
                return i;
        }
        return 0;
    }
};