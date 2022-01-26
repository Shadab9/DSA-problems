class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>result;
        int size=nums.size();
        int i=0;
        while(i<size)
        {
            int index=nums[i]-1;
            if(nums[i]!=nums[index])
                swap(nums[i],nums[index]);
            else
                i++;
            //cout<<nums[i]<<" "<<nums[index]<<endl;
        }
        for(int i=0;i<size;i++)
        {
            if(nums[i]!=i+1)
                result.push_back(i+1);
        }
        return result;
    }
};