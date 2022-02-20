class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<int>adjList[numCourses];
        int count=0;
        vector<int>inDegree(numCourses,0);
        for(auto it:prerequisites)
        {
            adjList[it[1]].push_back(it[0]);
        }
        
        for(auto it:prerequisites)
        {
            inDegree[it[0]]++;
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++)
        {
            if(inDegree[i]==0)
                q.push(i);
        }
        while(!q.empty())
        {
            auto temp=q.front();
            q.pop();
            count++;
            for(auto it:adjList[temp])
            {
                inDegree[it]--;
                if(inDegree[it]==0)
                    q.push(it);
            }
        }
        if(count==numCourses)
            return 1;
        return 0;
        
    }
};