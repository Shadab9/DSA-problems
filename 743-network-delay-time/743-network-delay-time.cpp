class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        unordered_map<int,vector<pair<int,int>>> mp;
        for(auto itr:times){
            mp[itr[0]].push_back(make_pair(itr[1],itr[2]));
        }
        int ans = 0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        unordered_map<int,int> dist;
        for(int i=1;i<=n;i++){
            dist[i] = INT_MAX;
        }
        dist[k] = 0;
        pq.push({0,k});
        vector<int> visited(n+1,0);
        while(!pq.empty()){
            auto node = pq.top().second;
            pq.pop();
            int cd = pq.top().first;
            visited[node] = 1;
            for(auto J:mp[node]){
                int nbr = J.first;
                int d  = J.second;
                if(!visited[J.first] and dist[nbr] > d + dist[node]){
                    dist[nbr] = d + dist[node];
                    pq.push({dist[nbr],nbr});
                }
            }
        }
        for(auto itr:dist){
            ans = max(ans,itr.second);
        }
        return ans == INT_MAX ? -1 : ans;
        
    }
};