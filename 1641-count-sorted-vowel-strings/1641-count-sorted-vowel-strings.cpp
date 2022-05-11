class Solution {
public:
    void countUtil(vector<char>&vowels,int ind,int n,int &count)
    {
        if(ind>=vowels.size() or n<=0)
        {
            if(n==0)
                count++;
            return;
        }
        
        countUtil(vowels,ind,n-1,count);
        
        countUtil(vowels,ind+1,n,count);
        
    }
    int countVowelStrings(int n) {
        vector<char> vowels={'a','e','i','o','u'};
        vector<char>temp;
       
        int count=0;
        countUtil(vowels,0,n,count);
        return count;
    }
};