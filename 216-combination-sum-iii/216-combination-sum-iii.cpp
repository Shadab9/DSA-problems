class Solution {
public:
    void combinationSumUtil(int s,vector<int>&v,int k,int n,vector<int>&temp,vector<vector<int>>& result)
    {
        if((n==0 and k==0) or s==v.size())
        {
            if(n==0 and k==0)
            result.push_back(temp);
            return;
        }
        if(v[s]<=n)
        {
            temp.push_back(v[s]);
            combinationSumUtil(s+1,v,k-1,n-v[s],temp,result);
            temp.pop_back();
            combinationSumUtil(s+1,v,k,n,temp,result);
        }
        else
            combinationSumUtil(s+1,v,k,n,temp,result);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>result;
        vector<int>temp;
        vector<int>v={1,2,3,4,5,6,7,8,9};
        combinationSumUtil(0,v,k,n,temp,result);
        return result;
    }
};