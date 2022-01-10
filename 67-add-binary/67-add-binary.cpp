class Solution {
public:
    string addBinary(string a, string b) {
        int n1=a.length();
        int n2=b.length();
        if(n1>n2)
        {
            for(int i=0;i<n1-n2;i++)
                b="0"+b;
        }
        else
        {
            for(int i=0;i<n2-n1;i++)
                a="0"+a;
        }
        n1=a.length();
        n2=b.length();
        int c=0;
        string s="";
        for(int i=n1-1;i>=0;i--)
        {
            int x=(a[i]-'0')+(b[i]-'0')+c;
            if(x==0 or x==1)
            {
                s+=to_string(x);
                c=0;
            }
            else if(x==2)
            {
                s+="0";
                c=1;
            }
            else if(x==3)
            {
                s+="1";
                c=1;
            }   
        }
        if(c==1)
            s+="1";
        reverse(s.begin(),s.end());
        return s;
    }
};