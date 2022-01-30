class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        
        int length=0;
        for(auto it:nums)
            length++;
        k=k%length;
        reverse(nums.begin(),nums.begin()+length-k);
        // reverse(nums.begin()+length-k+1,nums.end());
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
    }
};