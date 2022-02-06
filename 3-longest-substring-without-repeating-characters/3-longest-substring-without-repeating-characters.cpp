class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
            return 0;
        unordered_map<char,int>mp;
        int start=0;
        int ans=INT_MIN;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]<=1)
            {
                ans=max(ans,i-start+1);
            }
            else
            {
                while(mp[s[i]]>1)
                {
                    mp[s[start]]--;
                    start++;
                }
            }
        }
        return ans;
            
        
    }
};