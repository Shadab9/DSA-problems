class Solution {
public:
    bool wordSearch(vector<vector<char>>& board,string word,int i, int j,int row,int col,int st,vector<vector<int>>&vis)
    {
        if(st==word.size())
            return 1;
        if(i>=row or j>=col or i<0 or j<0 or vis[i][j]==1 or board[i][j]!=word[st])
            return 0;
        vis[i][j]=1;
        bool ans=wordSearch(board,word,i+1,j,row,col,st+1,vis) or wordSearch(board,word,i-1,j,row,col,st+1,vis) or wordSearch(board,word,i,j+1,row,col,st+1,vis) or wordSearch(board,word,i,j-1,row,col,st+1,vis);
        vis[i][j]=0;
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int row=board.size();
        int col=board[0].size();
        vector<vector<int>>vis(row+1,vector<int>(col+1,0));
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(wordSearch(board,word,i,j,row,col,0,vis))
                    return true;
            }
        }
        return false;
    }
};