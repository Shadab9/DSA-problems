class Solution {
public:
    int minInsertions(string s) {
        int size=s.size();
        string temp=s;
        reverse(temp.begin(),temp.end());
        if(temp==s)
            return 0;
        vector<vector<int>>result(size+1,vector<int>(size+1,0));
        for(int i=0;i<=size;i++)
        {
            for(int j=0;j<=size;j++)
            {
                if(i==0 or j==0)
                    result[i][j]=0;
                else
                    if(s[i-1]==temp[j-1])
                        result[i][j]=1+result[i-1][j-1];
                else
                    result[i][j]=max(result[i-1][j],result[i][j-1]);
            }
        }
        return s.size()-result[size][size];
    }
};