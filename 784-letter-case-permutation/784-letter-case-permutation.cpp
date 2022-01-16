class Solution {
public:
    void letter(string s,int start,int end,string &temp,vector<string>&result)
    {
        if(start>=s.size())
        {
            result.push_back(temp);
            return;
        }
        if(!isdigit(s[start]))
        {
            temp.push_back(s[start]);
            letter(s,start+1,end,temp,result);
            temp.pop_back();
            
            
            s[start]=(s[start]>='a' and  s[start]<='z')?toupper(s[start]):tolower(s[start]);
            temp.push_back(s[start]);
            letter(s,start+1,end,temp,result);
            temp.pop_back();
        }
        else
        {
            temp.push_back(s[start]);
            letter(s,start+1,end,temp,result);
            temp.pop_back();
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>result;
        string temp;
        letter(s,0,s.size(),temp,result);
        return result;
    }
};