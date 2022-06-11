class Solution {
public:
//     [3, 2, 20  1, 1, 3]
//      3  5  25  26 27 30
//      30 27 25  5  4  3
    
//      [1, 1, 4, 2, 3]
//          
       
    
    int minOperations(vector<int>& nums, int x) {
        int sum=0;
        int size=nums.size();
        for(int i=0;i<size;i++)
            sum+=nums[i];
        if(sum==x)
            return nums.size();
        if(sum<x)
            return -1;
        
        
        int sub_sum=0,start=0,target=sum-x,maxsize=0;
        for(int i=0;i<size;i++)
        {
            sub_sum+=nums[i];
            while(sub_sum>target)
            {
                sub_sum-=nums[start++];
            }
            if(sub_sum==target)
                maxsize=max(maxsize,i-start+1);
        }
        return maxsize==0?-1:size-maxsize;
    }
};