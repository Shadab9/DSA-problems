class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int size=nums.size();
        sum=((size)*(size+1))/2;
        for(int i:nums)
            sum-=i;
        return sum;
    }
};