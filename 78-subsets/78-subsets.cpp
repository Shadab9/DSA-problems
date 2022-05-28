class Solution {
public:
    void subsetUtil(vector<int>&nums,int start,vector<int>&temp,vector<vector<int>>&result)
    {
        if(start>=nums.size())
        {
            result.push_back(temp);
            return;
        }
        temp.push_back(nums[start]);//accept
        subsetUtil(nums,start+1,temp,result);
        temp.pop_back();
        subsetUtil(nums,start+1,temp,result);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>temp;
        subsetUtil(nums,0,temp,result);
        return result;
    }
};
          
                            