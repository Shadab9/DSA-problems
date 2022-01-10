class Solution {
public:
    int checkPalindrome(string s,int i,int j)
    {
        int c=0;
        while(i>=0 and j<s.length() and s[i]==s[j])
        {
                i--;
                j++;
            
        }
        return j-i-1;
        
    }
    string longestPalindrome(string s) {
        int mx=INT_MIN;
        int start=0;
        for(int i=0;i<s.length();i++)
        {
            int temp=checkPalindrome(s,i,i);
            if(mx<temp)
            {
                mx=temp;
                start=i-((mx-1)/2);
            }
        }
        for(int i=0;i<s.length()-1;i++)
        {
            int temp=checkPalindrome(s,i,i+1);
            if(mx<temp)
            {
                mx=temp;
                start=i-((mx-1)/2);
            }
        }
        
        return s.substr(start,mx);
    }
};