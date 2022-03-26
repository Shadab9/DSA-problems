class Solution {
public:
    void combinationUtil(vector<int>&candidates,int start,int size,int target,vector<int>&temp,vector<vector<int>>&result)
    {
        if(start>=size or target<=0)
        {
            if(target==0)
                result.push_back(temp);
            return;
        }
        for(int i=start;i<size;i++)
        {
            if(i>start and candidates[i]==candidates[i-1])
                continue;
            temp.push_back(candidates[i]);
            combinationUtil(candidates,i+1,size,target-candidates[i],temp,result);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        combinationUtil(candidates,0,candidates.size(),target,temp,result);
        return result;
        
    }
};