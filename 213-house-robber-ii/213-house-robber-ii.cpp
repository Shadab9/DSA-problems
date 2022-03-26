class Solution {
public:
    int robUtil(vector<int>&nums,int start,int end,vector<int>&result)
    {
        
        if(start>=end)
        {
            return 0;
        }
        if(result[start]!=-1)
            return result[start];
        int opt1=nums[start]+robUtil(nums,start+2,end,result);
        int opt2=robUtil(nums,start+1,end,result);
        return result[start]=max(opt1,opt2);
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        vector<int>result(nums.size()+1,-1);
        
        int first_max=robUtil(nums,0,nums.size()-1,result);
        vector<int>result1(nums.size()+1,-1);
        int second_max=robUtil(nums,1,nums.size(),result1);
        return max(first_max,second_max);
    }
};