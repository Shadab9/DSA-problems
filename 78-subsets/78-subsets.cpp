class Solution {
public:
    void subsetUtil(vector<int>& nums,int i,vector<vector<int>>&result,vector<int>&temp)
    {
        if(i==nums.size())
        {
            result.push_back(temp);
        }
        else
        {
            temp.push_back(nums[i]);
            subsetUtil(nums,i+1,result,temp);
            temp.pop_back();
            subsetUtil(nums,i+1,result,temp);
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>temp;
        subsetUtil(nums,0,result,temp);
        return result;
    }
};