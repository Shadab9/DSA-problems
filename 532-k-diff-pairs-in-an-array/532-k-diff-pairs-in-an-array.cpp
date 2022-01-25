class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int res=0;
        
        for(int i : nums) {
            if(m.find(i) == m.end()) {
                if(m.find(i+k)!=m.end()) res++;
                if(m.find(i-k)!=m.end()) res++;
                m[i] = 1;
                continue;
            } else if(k == 0 && m[i]<=1) {
                res++;
            }
            m[i]++;
        }
        
        return res;
    }
};