class Solution {
public:
    bool detectCapitalUse(string word) {
        int cu=0;
        for(int i=0;i<word.length();i++)
        {
            if(word[i]>='A' and word[i]<='Z')
                cu++;
        }
        if(cu==word.size() or (cu==1 and word[0]>='A' and word[0]<='Z') or cu==0)
            return 1;
        return 0;
    }
};