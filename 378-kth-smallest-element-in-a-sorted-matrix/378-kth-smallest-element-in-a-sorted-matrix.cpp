class Solution {
public:
    typedef long long ll;
    int search(vector<int>& arr,ll target)
    {
        ll low=0,high=arr.size()-1;
        ll mid=0;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            
            if(arr[mid]<=target)
                low=mid+1;
            else
                high=mid-1;
        }
        return low;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        ll low=matrix[0][0],high=matrix[matrix.size()-1][matrix[0].size()-1];
        ll mid=0;
        int count=0;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            count=0;
            for(int i=0;i<matrix.size();i++)
                count+=search(matrix[i],mid);
             if(count<k)
                low=mid+1;
            else
                high=mid-1; 
        }
        return low;
       
        
        
        
    }
};