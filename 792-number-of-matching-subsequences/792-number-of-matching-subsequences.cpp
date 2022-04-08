class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int ans=0;
        
        int l1=s.size();
        map<string,int>mp;
        for(auto& it:words)
        {
            int l2=it.size();
            int j=0;
            if(mp.find(it)==mp.end())
            {
                for(int i=0;i<l1 and j<l2;i++)
                {
                    if(s[i]==it[j])
                        j++;
                }
                ans+=(j==l2);
                mp[it]=(j==l2);
            }
            else
            {
                ans+=mp[it];
            }
                
        }
        return ans;
        
    }
};