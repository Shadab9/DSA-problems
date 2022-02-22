class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int size=columnTitle.size(),sum=0;
        if(size==0)
            return 0;
        unordered_map<char,int>charMap;
        int k=1;
        for(char c='A';c<='Z';c++)
        {
            charMap[c]=k;
            k++;
        }
        for(int i=0;i<size;i++)
        {
            sum=sum*26+charMap[columnTitle[i]];
        }
        return sum;
    }
};