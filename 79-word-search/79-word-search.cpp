class Solution {
public:
    bool dfs(int i,int j,vector<vector<int>>&vis,vector<vector<char>>& board,int s,string word)
    {
       
        if(s==word.size())
            return true;
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j] != word[s] || vis[i][j]==1)
            return false;
            vis[i][j]=1;
            bool ans=dfs(i+1,j,vis,board,s+1,word) or dfs(i-1,j,vis,board,s+1,word) or dfs(i,j+1,vis,board,s+1,word) or dfs(i,j-1,vis,board,s+1,word);
            vis[i][j]=0;            

        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                if(dfs(i,j,vis,board,0,word))
                    return true;
        }
        return false;
    }
};