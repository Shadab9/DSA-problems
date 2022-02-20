class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>adjList[numCourses];
        
        vector<int>inDegree(numCourses,0);
        for(auto it:prerequisites)
        {
            adjList[it[1]].push_back(it[0]);
        }
        for(auto it:prerequisites)
            inDegree[it[0]]++;
        queue<int>q;
        for(int i=0;i<numCourses;i++)
        {
            if(inDegree[i]==0)
                q.push(i);
        }
        int cnt=0;
        while(!q.empty())
        {
            auto temp=q.front();
            q.pop();
            cnt++;
            for(auto it:adjList[temp])
            {
                inDegree[it]--;
                if(inDegree[it]==0)
                    q.push(it);
            }
        }
        return cnt==numCourses;
    }
};