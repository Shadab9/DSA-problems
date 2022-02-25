// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    
    int firstBadVersion(int n) {
        
        long int l=1;
        long int r=n;
        int flag=0;
        while(l<=r)
        {
            long int mid=(l+r)/2;
            if(isBadVersion(mid))
            {
                flag=mid;
                r=mid-1;
            }
            if(isBadVersion(mid)==false)
                l=mid+1;
        }
        return flag;

    }
};