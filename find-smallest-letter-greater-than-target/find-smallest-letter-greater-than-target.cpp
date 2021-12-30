class Solution {
public:
    char nextGreatestLetter(vector<char>& arr, char target) {
        int s=0; int e = arr.size()-1;
        int mid ;
        while(s<=e){mid = s+ (e-s)/2;
            if(arr[mid]>target)
                e = mid-1;
            else
                s = mid+1;
            
            
        }
        return arr[s%(arr.size())];
    }
};