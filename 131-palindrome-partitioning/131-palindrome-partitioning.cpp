class Solution {

    int ispalin(string s,int l,int r)
    {
        while(l<=r)
        {
            if(s[l++]!=s[r--])
                return 0;
        }
        return 1;
    }
    void help(string s,int st,vector<string>&path,vector<vector<string>>&result)
    {
        if(st==s.size())
        {
            result.push_back(path);
            return;
        }
        for(int i=st;i<s.size();i++)
        {
            if(ispalin(s,st,i))
            {
                path.push_back(s.substr(st,i-st+1));
                help(s,i+1,path,result);
                path.pop_back();
            }
        }
        
    }
    public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>result;
        vector<string>path;
        help(s,0,path,result);
        return result;
    }
};