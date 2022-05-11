class Solution {
public:
    void countUtil(vector<char>&vowels,int ind,int n,vector<char>&temp,vector<vector<char>>&result)
    {
        if(ind>=vowels.size() or n<=0)
        {
            if(n==0)
                result.push_back(temp);
            return;
        }
        temp.push_back(vowels[ind]);
        countUtil(vowels,ind,n-1,temp,result);
        temp.pop_back();
        countUtil(vowels,ind+1,n,temp,result);
        
    }
    int countVowelStrings(int n) {
        vector<char> vowels={'a','e','i','o','u'};
        vector<char>temp;
        vector<vector<char>>result;
        countUtil(vowels,0,n,temp,result);
        return result.size();
    }
};