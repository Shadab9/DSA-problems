class Solution {
public:
    int nextGreaterElement(int n) {
        string str=to_string(n);
        int ind1=-1,ind2=-1;
        string temp=str;
        // if(temp.size()==1)
        //     return -1;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]<str[i+1])
                ind1=i;
        }
        if(ind1!=-1)
        {
            for(int i=str.size()-1;i>=0;i--)
            {
                if(str[i]>str[ind1])
                {
                    ind2=i;
                    break;
                }
            }
        }
        if(ind1!=-1 and ind2!=-1)
            swap(str[ind1],str[ind2]);
        reverse(str.begin()+ind1+1,str.end());
        if(stoll(str)>INT_MAX or temp>=str)
            return -1;
        return stoll(str);
    }
};