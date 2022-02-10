class Solution {
public:
    int search(vector<int>& arr,int target)
    {
        int low=0,high=arr.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(arr[mid]<=target)
                low=mid+1;
            else
                high=mid-1;
        }
        return low;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int rows=matrix.size(),cols=matrix[0].size();
        int low=matrix[0][0],high=matrix[rows-1][cols-1];
        int count=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            count=0;
            for(int i=0;i<rows;i++)
                count+=search(matrix[i],mid);
            if(count<k)
                low=mid+1;
            else
                high=mid-1;
        }
        return low;
    }
};