class Solution {
public:
    void generateUtil(int open,int close,string& temp,vector<string>&result)
    {
        if(open==0 and close==0)
        {
            result.push_back(temp);
            return;
        }
        if(open>0)
        {
            temp.push_back('(');
            generateUtil(open-1,close,temp,result);
            temp.pop_back();
        }
        if(close>0 and open<close)
        {
            temp.push_back(')');
            generateUtil(open,close-1,temp,result);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        string temp;
        generateUtil(n,n,temp,result);
        return result;
    }
};