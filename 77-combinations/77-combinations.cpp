class Solution {
public:
    void combineUtil(vector<int>& nums,int start,int k,vector<int>& temp,vector<vector<int>>& result)
    {
        
        if( k==0 or start>=nums.size())
        {
            if(k==0)
            result.push_back(temp);
            return;
        }
        temp.push_back(nums[start]);
        combineUtil(nums,start+1,k-1,temp,result);
        temp.pop_back();
        combineUtil(nums,start+1,k,temp,result);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>result;
        vector<int>nums;
        for(int i=1;i<=n;i++)
            nums.push_back(i);
        vector<int>temp;
        combineUtil(nums,0,k,temp,result);
        return result;
    }
};