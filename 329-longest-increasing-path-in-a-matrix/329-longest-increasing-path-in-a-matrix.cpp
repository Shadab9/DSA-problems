class Solution {
public:
    int check(vector<vector<int>>&matrix,int i,int j,vector<vector<int>>&result)
    {
        if(result[i][j]>0)
            return result[i][j];
    int size=matrix.size();
        int size1=matrix[0].size();
    vector<int>dx={0,1,0,-1};
    vector<int>dy={1,0,-1,0};
    int amx=0;
    for(int k=0;k<4;k++)
    {
        int new_X=dx[k]+i;
        int new_Y=dy[k]+j;
        if(new_X>=0 and new_X<size and new_Y>=0 and new_Y<size1 and matrix[new_X][new_Y]>matrix[i][j])
        {
            amx=max(amx,check(matrix,new_X,new_Y,result));
        }
    }
    result[i][j]=amx+1;
    return amx+1;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        
        
    int size=matrix.size();
    int size1=matrix[0].size();
    int mx=0;
        vector<vector<int>>result(size,vector<int>(size1,0));
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size1;j++)
        {
            mx=max(mx,check(matrix,i,j,result));
        }
    }
    return mx;
    }
};