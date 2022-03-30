class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        
        int size1=s1.size(),size2=s2.size();
        char x,y;
        int c=1;
        if(s1==s2)
            return true;
        for(int i=0;i<size1;i++)
        {
            if(s1[i]!=s2[i] and c==1)
            {
                x=s1[i];
                y=s2[i];
                c--;
            }
            else if(s1[i]!=s2[i] and c==0)
            {
                if(x==s2[i] and y==s1[i])
                    c--;
                else
                    return false;
                    
            }
            else if(s1[i]==s2[i])
                continue;
                
            else
                return false;
        }
        if(c>=0)
            return false;
        return true;
    }
};