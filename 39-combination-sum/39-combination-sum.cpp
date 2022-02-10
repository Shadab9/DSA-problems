class Solution {
public:
    void combinationUtil(vector<int>& candidates,int target,int start,vector<int>& temp,vector<vector<int>>& result)
    {
        if(start>=candidates.size() or target<=0)
        {
            if(target==0)
                result.push_back(temp);
            return;
        }
        
        temp.push_back(candidates[start]);
        combinationUtil(candidates,target-candidates[start],start,temp,result);
        temp.pop_back();
        combinationUtil(candidates,target,start+1,temp,result);
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>temp;
        combinationUtil(candidates,target,0,temp,result);
        return result;
    }
};