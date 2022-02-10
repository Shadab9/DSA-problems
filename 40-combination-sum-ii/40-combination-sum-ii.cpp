class Solution {
public:
    void combinationUtil(vector<int>& candidates,int start,int target,vector<int>& temp,vector<vector<int>>& result)
    {
        if(start>=candidates.size() or target==0)
        {
            if(target==0)
                result.push_back(temp);
            return;
        }
       for(int i=start;i<candidates.size();i++)
        {
           if(i>start and candidates[i]==candidates[i-1])
               continue;
           if(candidates[i]>target)
               break;
            temp.push_back(candidates[i]);
            combinationUtil(candidates,i+1,target-candidates[i],temp,result);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        combinationUtil(candidates,0,target,temp,result);
        return result;
    }
};