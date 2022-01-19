class Solution {
public:
    int check(int i,int j,int m,int n)
    {
        if(i>=0 and i<m and j>=0 and j<n)
            return 1;
        return 0;
    }
    void bfs(int i,int j,vector<vector<int>>&vis,vector<vector<char>>&grid)
    {
        int n=grid[0].size();
        int m=grid.size();
        vis[i][j]=1;
        queue<pair<int,int>>q;
        q.push({i,j});
        while(!q.empty())
        {
            auto temp=q.front();
            q.pop();
            int x=temp.first;
            int y=temp.second;
            vector<int>dx={0,-1,0,1};
            vector<int>dy={1,0,-1,0};
            for(int k=0;k<4;k++)
            {
                int new_x=dx[k]+x;
                int new_y=dy[k]+y;
                cout<<new_x<<" "<<new_y<<endl;
                if(check(new_x,new_y,m,n))
                {                    
                    
                    if(grid[new_x][new_y]=='1' and vis[new_x][new_y]==0)
                    {                
                        vis[new_x][new_y]=1;
                        q.push({new_x,new_y});
                    }
                }
            } 
        }
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid[0].size();
        int m=grid.size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        int c=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(vis[i][j]==0 and grid[i][j]=='1')
                {
                    c++;
                    bfs(i,j,vis,grid);
                }
            }
                
        }
        return c;
        
    }
};