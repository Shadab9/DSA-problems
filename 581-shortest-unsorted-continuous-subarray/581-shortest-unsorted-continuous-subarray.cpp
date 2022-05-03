class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>arr=nums;
        sort(arr.begin(),arr.end());
        int size=nums.size();
        int ans=0,start=-1;
        for(int i=0;i<size;i++)
        {
            if(arr[i]!=nums[i])
            {
                if(start==-1)
                    start=i;
                ans=max(ans,i-start+1);
            }
            
        }
        return ans;
    }

};