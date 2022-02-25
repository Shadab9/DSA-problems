// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int binarysearch(long int l,long int r)
    {
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
    int firstBadVersion(int n) {
        
        long int l=1;
        long int r=n;
        //return binarysearch(l,r);
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