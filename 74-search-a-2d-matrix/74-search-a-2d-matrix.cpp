class Solution {
public:
    bool binarysearch(vector<int>&temp,int left,int right,int target)
    {
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(temp[mid]==target)
                return true;
            if(temp[mid]<target)
                left=mid+1;
            if(temp[mid]>target)
                right=mid-1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int left=0,right=matrix.size()-1;
        // while(left<=right)
        // {
        //     int mid=(left+right)/2;
        //     if(target>=matrix[mid][0] and target<=matrix[mid][matrix[0].size()-1])
        //     {
        //         vector<int>temp=matrix[mid];
        //         return binarysearch(temp,0,matrix[0].size()-1,target);
        //     }
        //     else if(target<matrix[mid][0])
        //         right=mid-1;
        //     else if(target>matrix[mid][0])
        //         left=mid+1;
        // }
        // return false;
        int row=0,col=matrix[0].size()-1;
        while(row<matrix.size() and col>=0)
        {
            if(matrix[row][col]==target)
                return true;
            else if(matrix[row][col]<target)
                row++;
            else if(matrix[row][col]>target)
                col--;
        }
        return false;
    }
};