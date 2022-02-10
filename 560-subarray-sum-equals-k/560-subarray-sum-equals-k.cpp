class Solution {
public:
    int subArrayUtil(vector<int>& nums,int k)
    {
        int size=nums.size();
        unordered_map<int,int>subMap;
        subMap[0]=1;
        int count=0,sum=0;
        for(int i=0;i<size;i++)
        {
            sum+=nums[i];
            if(subMap[sum-k]!=0)
                count+=subMap[sum-k];
            subMap[sum]++;
        }
        return count;
    }
    int subarraySum(vector<int>& nums, int k) {
        int size=nums.size();
        return subArrayUtil(nums,k);
    }
};