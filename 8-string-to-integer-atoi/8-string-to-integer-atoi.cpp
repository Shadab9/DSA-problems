class Solution {
public:
    int myAtoi(string s) {
        long long int ans=0;
        int i=0;
        int l=s.length();
        int flag=1;
        while(i<l and s[i]==' ')
        {
                i++;
        }
        if(s[i]=='+' or s[i]=='-')
        {
            if(s[i]=='-')
                flag=-1;
            i++;
        }
        while(i<l and s[i]>='0' and s[i]<='9')
        {
            ans=ans*10+(s[i]-'0');
            i++;
            if(ans*flag<INT_MIN)
                return INT_MIN;
            if(ans*flag>INT_MAX)
                return INT_MAX;
        }
        return ans*flag;
    }
};