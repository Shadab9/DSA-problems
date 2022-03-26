class Solution {
public:
    bool dfs(vector<vector<char>>&board,int i,int j,int row,int col,string word,int st,vector<vector<int>>&vis)
    {
        if(st==word.size())
            return 1;
        if(i<0 or i>=row or j<0 or j>=col or vis[i][j]==1 or board[i][j]!=word[st])
            return 0;
        vis[i][j]=1;
        bool ans=dfs(board,i+1,j,row,col,word,st+1,vis) or dfs(board,i-1,j,row,col,word,st+1,vis) or dfs(board,i,j+1,row,col,word,st+1,vis) or dfs(board,i,j-1,row,col,word,st+1,vis);
        
        vis[i][j]=0;
        return ans;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        int row=board.size(),col=board[0].size();
        vector<vector<int>>vis(row,vector<int>(col,0));
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(dfs(board,i,j,row,col,word,0,vis))
                    return true;
            }
        }
        return false;
    }
};