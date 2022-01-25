class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return 0;
        int ind1=-1;
        int ind2=-1;
        for(int i=0;i<arr.size()-1;i++)
        {
            
            if(arr[i]<arr[i+1])
                ind1=i;
            else
                break;
        
        }
        for(int i=arr.size()-1;i>=1;i--)
        {
            if(arr[i]<arr[i-1])
                ind2=i;
            else
                break;
        }
        if(ind1!=-1 and ind2!=-1 and ind1+1==ind2-1)
            return 1;
        return 0;
    }
};