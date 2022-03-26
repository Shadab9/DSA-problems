class Solution {
public:
    void letterUtil(string s,int start,vector<string>&result,string &temp)
    {
       
        if(start>=s.size())
        {
            result.push_back(temp);
            return;
        }
        if(!isdigit(s[start]))
        {
            temp.push_back(s[start]);
            letterUtil(s,start+1,result,temp);
            temp.pop_back();
            
            s[start]=s[start]>='a' and s[start]<='z'?toupper(s[start]):tolower(s[start]);
            temp.push_back(s[start]);
            letterUtil(s,start+1,result,temp);
            temp.pop_back();
        }
        else
        {
            temp.push_back(s[start]);
            letterUtil(s,start+1,result,temp);
            temp.pop_back();
        }
    }
        
    vector<string> letterCasePermutation(string s) {
        vector<string>result;
        string temp;
        letterUtil(s,0,result,temp);
        
        return result;
    }
};