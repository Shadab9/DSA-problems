class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                right=mid-1;
            else
                left=mid+1;
        }
        return -1;
    }
};

//  [-1,0,3,5,9,12]
//   0  1 2 3 4  5
      
      
//       left=0 right=1
//       mid=2