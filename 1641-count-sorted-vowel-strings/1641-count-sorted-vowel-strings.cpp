class Solution {
public:
    void countUtil(vector<char>&vowels,int ind,int n,vector<char>&temp,int &count)
    {
        if(ind>=vowels.size() or n<=0)
        {
            if(n==0)
                count++;
            return;
        }
        //temp.push_back(vowels[ind]);
        countUtil(vowels,ind,n-1,temp,count);
        //temp.pop_back();
        countUtil(vowels,ind+1,n,temp,count);
        
    }
    int countVowelStrings(int n) {
        vector<char> vowels={'a','e','i','o','u'};
        vector<char>temp;
        //vector<vector<char>>result;
        int count=0;
        countUtil(vowels,0,n,temp,count);
        return count;
    }
};