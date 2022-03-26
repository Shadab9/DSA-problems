class Solution {
public:
    int robUtil(vector<int>&nums,int start,int end,vector<int>&result)
    {
        if(result[start]!=-1)
            return result[start];
        if(start>=end)
        {
            return 0;
        }
        int opt1=nums[start]+robUtil(nums,start+2,end,result);
        int opt2=robUtil(nums,start+1,end,result);
        return result[start]=max(opt1,opt2);
            
    }
    int rob(vector<int>& nums) {
        vector<int>result(nums.size()+2,-1);
        int sum=0;
        return robUtil(nums,0,nums.size(),result);
        
    }
};