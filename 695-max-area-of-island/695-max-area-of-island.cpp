class Solution {
    int check(int new_X,int new_Y,int row,int col)
    {
        if(new_X>=0 and new_Y>=0 and new_X<row and new_Y<col)
            return 1;
        return 0;
        
    }
public:
    int bfs(vector<vector<int>>&grid,int i,int j,int row,int col,vector<vector<int>>&vis)
    {
        queue<pair<int,int>>q;
        q.push({i,j});
        vector<int>dx={0,1,0,-1};
        vector<int>dy={1,0,-1,0};
        int count=0;
        vis[i][j]=1;
        while(!q.empty())
        {
            auto temp=q.front();
            q.pop();
            count++;
            int old_X=temp.first;
            int old_Y=temp.second;
            for(int i=0;i<4;i++)
            {
                int new_X=old_X+dx[i];
                int new_Y=old_Y+dy[i];
                if(check(new_X,new_Y,row,col) and vis[new_X][new_Y]==0 and grid[new_X][new_Y]==1)
                {
                    vis[new_X][new_Y]=1;
                    q.push({new_X,new_Y});
                }
            }
        }
        return count;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row=grid.size(),col=grid[0].size(),result=0;
        vector<vector<int>>vis(row,vector<int>(col,0));
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(vis[i][j]==0 and grid[i][j]==1)
                {
                    result=max(result,bfs(grid,i,j,row,col,vis));
                }
            }
        }
        return result;
    }
};