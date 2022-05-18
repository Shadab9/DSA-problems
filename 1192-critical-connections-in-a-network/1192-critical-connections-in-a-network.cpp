class Solution {
    void dfs(int node,int parent,vector<int>&vis,vector<int>&tin,vector<int>&low,int &timer,vector<int>adj[],vector<vector<int>>&result)
    {
        vis[node]=1;
        tin[node]=low[node]=timer++;
        for(auto it:adj[node])
        {
            if(it==parent)
                continue;
            if(!vis[it])
            {
                dfs(it,node,vis,tin,low,timer,adj,result);
                low[node]=min(low[node],low[it]);
                if(low[it]>tin[node])
                    result.push_back({node,it});
                
                    
            }
            else
                low[node]=min(low[node],tin[it]);
        }
    }
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>>result;
        vector<int>adjList[n];
        for(auto it:connections)
        {
            int u=it[0];
            int v=it[1];
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        vector<int>tin(n,-1);
        vector<int>low(n,-1);
        vector<int>vis(n,0);
        int timer=0;
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
                dfs(i,-1,vis,tin,low,timer,adjList,result);
        }
        
        
        return result;
        
    }
};