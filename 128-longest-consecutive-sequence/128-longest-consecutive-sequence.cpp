class Solution {
public:
    int longestUtil(vector<int>& nums,int start,int end)
    {
        unordered_map<int,int>elementFreq;
        int answer=0;
        for(int i=0;i<end;i++)
        elementFreq[nums[i]]=1;
        for(int i=0;i<end;i++)
        {
            if(elementFreq[nums[i]-1]==0)
            {
                int count=0;
                int value=nums[i];
                while(elementFreq[value]==1)
                {
                    value++;
                    count++;
                }
                answer=max(answer,count);
            }
        }
        return answer;
    }
    int longestConsecutive(vector<int>& nums) {
        int size=nums.size();
        return longestUtil(nums,0,size);
    }
};