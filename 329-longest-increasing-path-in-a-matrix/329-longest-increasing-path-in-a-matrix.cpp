class Solution {
public:
    int check(vector<vector<int>>&matrix,int i,int j,int row,int col,vector<vector<int>>&result)
    {
        if(result[i][j]>0)
            return result[i][j];
        vector<int>dx={1,-1,0,0};
        vector<int>dy={0,0,1,-1};
        int count=0;
            for(int k=0;k<4;k++)
            {
                int new_X=i+dx[k];
                int new_Y=j+dy[k];
                if(new_X>=0 and new_X<row and new_Y>=0 and new_Y<col and matrix[i][j]<matrix[new_X][new_Y])
                {
                    count=max(count,check(matrix,new_X,new_Y,row,col,result));
                }
            }
        result[i][j]=count+1;
        return count+1;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int row=matrix.size(),col=matrix[0].size();
        int ans=0;
        vector<vector<int>>result(row,vector<int>(col,0));
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                ans=max(ans,check(matrix,i,j,row,col,result));
            }
        }
        return ans;
        
    }
};