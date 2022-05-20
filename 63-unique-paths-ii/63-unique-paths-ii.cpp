class Solution {
public:
    int unique(vector<vector<int>>&obstacleGrid,int i,int j,int row,int col,vector<vector<int>>&dp)
    {
        if(i<0 or j<0 or i>=row or j>=col or obstacleGrid[i][j]==1)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(i==row-1 and j==col-1)
            return 1;
        int right=unique(obstacleGrid,i,j+1,row,col,dp);
        int down=unique(obstacleGrid,i+1,j,row,col,dp);
        return dp[i][j]=right+down;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int rows=obstacleGrid.size();
        int cols=obstacleGrid[0].size();
        vector<vector<int>>dp(rows,vector<int>(cols,-1));
        return unique(obstacleGrid,0,0,rows,cols,dp);
        
    }
};