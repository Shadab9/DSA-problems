class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>>adjList(n+1);
        vector<int>inDegree(n+1,0);
        for(auto it:trust)
        {
            adjList[it[0]].push_back(it[1]);
        }
        for(int i=1;i<=n;i++)
        {
            for(auto it:adjList[i])
                inDegree[it]++;
        }
        int ind=-1;
        for(int i=1;i<=n;i++)
        {
            if(inDegree[i]==n-1 and adjList[i].size()==0)
                ind=i;
        }
        return ind;
    }
};