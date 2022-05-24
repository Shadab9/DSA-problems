class Solution {
public:
    int longestValidParentheses(string s) {
        int left=0,right=0,ans=0;
        int size=s.size();
        for(int i=0;i<size;i++)
        {
            if(s[i]=='(')
                left++;
            else if(s[i]==')')
                right++;
            if(left==right)
                ans=max(ans,2*right);
            else 
            if(right>left)
            {
                left=0;
                right=0;
            }
        }
        left=0;
        right=0;
        for(int i=size-1;i>=0;i--)
        {
            if(s[i]=='(')
                left++;
            else if(s[i]==')')
                right++;
            if(left==right)
                ans=max(ans,2*right);
            else if(left>right)
            {
                left=0;
                right=0;
            }
        }
        return ans;
    }
};