class Solution {
public:
int isPalindrome(string s,int start,int end)
    {
        int count=0;
        while(start>=0 and end<s.length() and s[start--]==s[end++])
        {
            count++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int length=s.length();
        int res1=0;
        for(int i=0;i<length;i++)
        {
            res1+=isPalindrome(s,i,i);
            res1+=isPalindrome(s,i,i+1);
            
        }
        return res1;
    }
};