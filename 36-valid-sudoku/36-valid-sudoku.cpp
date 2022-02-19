class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]!='.' and isSafe(board,i,j,board[i][j])==false)
                    return false;
            }
        }
        return true;
        
    }
    
    bool isSafe(vector<vector<char>>& board,int row,int col,char c)
    {
        for(int i=0;i<9;i++)
        {
            if(board[row][i]==c and i!=col)
                return false;
            if(board[i][col]==c and i!=row)
                return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c and row!=(3*(row/3)+i/3) and col!=(3*(row/3)+i%3))
                return  false;
        }
        return true;
    }
};