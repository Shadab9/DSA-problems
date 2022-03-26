class Solution {
public:
    bool bfs(vector<vector<char>>& board,int i,int j,int row,int col,vector<vector<int>>&vis,int st,string word)
    {
        if(st==word.size())
            return 1;
        if(i>=row or i<0 or j<0 or j>=col or vis[i][j]==1 or word[st]!=board[i][j] )
            return 0;
        vis[i][j]=1;
        bool ans=bfs(board,i+1,j,row,col,vis,st+1,word) or bfs(board,i-1,j,row,col,vis,st+1,word) or bfs(board,i,j+1,row,col,vis,st+1,word) or bfs(board,i,j-1,row,col,vis,st+1,word);
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
                if(bfs(board,i,j,row,col,vis,0,word))
                    return true;
            }
        }
        return false;
    }
};