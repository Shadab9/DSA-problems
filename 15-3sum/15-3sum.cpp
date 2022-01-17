class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            int j=i+1;
            int k=size-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    vector<int>temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    result.push_back(temp);
                    while(j<k and nums[j]==temp[1])
                        j++;
                    while(j<k and nums[k]==temp[2])
                        k--;
                }
                else if(sum<0)
                    j++;
                else
                    k--;
            }
            while(i+1<size and nums[i]==nums[i+1])
                i++;
        }
        return result;
    }
};