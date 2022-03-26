class Solution {
public:
    int ispalin(string s,int start,int end)
    {
        while(start<=end)
        {
            if(s[start++]!=s[end--])
            {
                return 0;
            }
            
        }
        return 1;
    }
    void partitionUtil(string s,int start,int end,vector<string>&temp,vector<vector<string>>&result)
    {
        if(start>=end)
        {
            result.push_back(temp);
            return;
        }
        
        for(int i=start;i<end;i++)
        {
            if(ispalin(s,start,i))
            {
                temp.push_back(s.substr(start,i-start+1));
                partitionUtil(s,i+1,end,temp,result);
                temp.pop_back();
            }
        }
    }
        
    vector<vector<string>> partition(string s) {
        vector<vector<string>>result;
        vector<string>temp;
        partitionUtil(s,0,s.size(),temp,result);
        
        return result;
    }
};