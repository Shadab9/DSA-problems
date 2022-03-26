class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int size=nums.size();
        unordered_map<int,int>freq;
        for(int i=0;i<size;i++)
        {
            freq[nums[i]]++;
        }
        int result=0;
        for(int i=0;i<size;i++)
        {
            int count=0;
            if(freq[nums[i]-1]==0)
            {
                int temp=nums[i];
                while(freq[temp]>=1)
                {
                    temp++;
                    count++;
                }
            }
            result=max(result,count);
        }
        return result;
    }
};