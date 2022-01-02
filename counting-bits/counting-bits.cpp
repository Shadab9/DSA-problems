class Solution {
public:
    int countBitsUtil(int n)
    {
        if(n<=0)return 0;
            
        if(n%2!=0)
            return 1+countBitsUtil(n/2);
        else
            return countBitsUtil(n/2);
    }
    vector<int> countBits(int n) {
        vector<int>result;
        for(int i=0;i<=n;i++)
        result.push_back(countBitsUtil(i));
        return result;
    }
};