class Solution {
    void subsetsUtil(vector<int>& nums,int start,vector<vector<int>>& result,vector<int>& temp)
    {
        if(start>=nums.size())
        {
            result.push_back(temp);
            return;
        }
            temp.push_back(nums[start]);
            subsetsUtil(nums,start+1,result,temp);
            temp.pop_back();
            subsetsUtil(nums,start+1,result,temp);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>temp;   
        subsetsUtil(nums,0,result,temp);
        return result;
    }
};