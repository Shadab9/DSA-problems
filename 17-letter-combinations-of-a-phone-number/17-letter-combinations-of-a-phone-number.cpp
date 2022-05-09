class Solution {
public:
    void help(string digits,int s,unordered_map<char,string>&mp,vector<string>&result,string &x)
    {
        if(s==digits.length())
        {
            result.push_back(x);
            return;
        }
        string temp=mp[digits[s]];
        for(int i=0;i<temp.length();i++)
        {
            x.push_back(temp[i]);
            help(digits,s+1,mp,result,x);
            x.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
            return {};
        unordered_map<char,string>mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        vector<string>result;
        string x="";
        help(digits,0,mp,result,x);
        return result;
    }
};