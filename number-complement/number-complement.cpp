class Solution {
public:
    int findComplement(int n) {
        string s="";
        while(n>0)
        {
            if(n&1)
                s="0"+s;
            else
                s="1"+s;
            n=n/2;
        }
        bitset<32>b(s);
        return b.to_ulong();
    }
};