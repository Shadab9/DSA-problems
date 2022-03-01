class Solution {
public:
    void countBitsUtil(int n,vector<int>&result)
    {
        for(int i=0;i<=n;i++)
        {
            bitset<32>b1(i);
            result.push_back(b1.count());
        }
    }
    vector<int> countBits(int n) {
        vector<int>result;
        
        countBitsUtil(n,result);
        return result;
    }
};