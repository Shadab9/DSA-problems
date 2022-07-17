class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
            mp[t[i]]--;
        for(char c='a';c<='z';c++)
        {
            if(mp[c]!=0)
                return false;
        }
        return true;
    }
};