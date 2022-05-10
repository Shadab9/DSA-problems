class Solution {
public:
    void combinationSumUtil(vector<int>&nums,int ind,vector<int>&temp,vector<vector<int>>&result,int k,int n)
    {
        if(ind>=nums.size() or  k<=0 or n<=0)
        {
            if(k==0 and n==0)
                result.push_back(temp);
            return;
        }
        temp.push_back(nums[ind]);
        combinationSumUtil(nums,ind+1,temp,result,k-1,n-nums[ind]);
        temp.pop_back();
        combinationSumUtil(nums,ind+1,temp,result,k,n);
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums={1,2,3,4,5,6,7,8,9};
        vector<vector<int>>result;
        vector<int>temp;
        combinationSumUtil(nums,0,temp,result,k,n);
        return result;
    }
};