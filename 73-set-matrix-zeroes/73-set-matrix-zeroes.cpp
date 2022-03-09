class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if(matrix.size()==0)
            return;
        int rows=matrix.size(),cols=matrix[0].size();
        vector<int>row(rows,0);
        vector<int>col(cols,0);
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(row[i]==1 or col[j]==1)
                    matrix[i][j]=0;
            }
        }
    }
};