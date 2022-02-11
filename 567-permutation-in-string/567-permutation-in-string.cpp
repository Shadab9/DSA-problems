class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size()) return false;
        int size1=s1.size();
        int size2=s2.size();
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(int i=0;i<size1;i++)
        {
            v1[s1[i]-'a']++;
            v2[s2[i]-'a']++;
        }
        if(v1==v2)
            return true;
        for(int i=size1;i<size2;i++)
        {
            v2[s2[i]-'a']++;
            v2[s2[i-size1]-'a']--;
            if(v1==v2)
                return true;
        }
        return false;
    }
};