class Solution {
public:
    void combinationSum2Util(vector<int>& candidates,int target,vector<int>&temp,vector<vector<int>>&result,int s)
    {
        if(target==0)
        {
            result.push_back(temp);
            return;
        }
        for(int i=s;i<candidates.size();i++)
        {
            if(i>s and candidates[i]==candidates[i-1])
                continue;
            if(candidates[i]>target)
                break;
            temp.push_back(candidates[i]);
            combinationSum2Util(candidates,target-candidates[i],temp,result,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        combinationSum2Util(candidates,target,temp,result,0);
        return result;
        
    }
    

};