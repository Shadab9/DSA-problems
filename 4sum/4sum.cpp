class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        vector<vector<int>>result;
        int size=arr.size();
        sort(arr.begin(),arr.end());
        if(size<=3)
        {
            return {};
        }
        
        for(int i=0;i<size-2;i++)
        {
            for(int j=i+1;j<size-1;j++)
            {
                int k=j+1;
                int l=size-1;
                while(k<l)
                {
                    long long int sum=arr[i]*1ll+arr[j]*1ll+arr[k]*1ll+arr[l]*1ll;
                    if(sum==target)
                    {
                        vector<int>temp;
                        temp.push_back(arr[i]);
                        temp.push_back(arr[j]);
                        temp.push_back(arr[k]);
                        temp.push_back(arr[l]);
                        result.push_back(temp);
                        while(k<l and arr[k]==temp[2])
                            k++;
                        while(k<l and arr[l]==temp[3])
                            l--;
                    } 
                    else if(sum<target)
                        k++;
                    else if(sum>target)
                        l--;
                        
                }
                while(j+1<size and arr[j]==arr[j+1])
                    j++;
            }
            while(i+1<size and arr[i]==arr[i+1])
                i++;
        }
        return result;
    }
};