class Solution {
public:
    void permuteUtil(vector<int>&nums,int start,int end,vector<vector<int>>&result)
    {
        if(start>=end)
        {
            result.push_back(nums);
            return;
        }
        for(int i=start;i<end;i++)
        {
            swap(nums[start],nums[i]);
            permuteUtil(nums,start+1,end,result);
            swap(nums[start],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>result;
        permuteUtil(nums,0,nums.size(),result);
        return result;
        
    }
};