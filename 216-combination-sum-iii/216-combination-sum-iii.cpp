class Solution {
public:
    
    
    void combinationUtil(vector<int>&nums,int k,int n,int start,vector<int>&temp,vector<vector<int>>&result)
    {
        
        
        if((start>=nums.size() ) or (n==0 or k==0))
        {
            if(n==0 and k==0)
                result.push_back(temp);
            return;
        }
        // if(nums[start]<=n)
        // {
            temp.push_back(nums[start]);
            combinationUtil(nums,k-1,n-nums[start],start+1,temp,result);
            temp.pop_back();
            combinationUtil(nums,k,n,start+1,temp,result);
        
    }
        
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>result;
        vector<int>temp;
        vector<int>nums;
        for(int i=1;i<=9;i++)
            nums.push_back(i);
        combinationUtil(nums,k,n,0,temp,result);
        return result;
    }
};