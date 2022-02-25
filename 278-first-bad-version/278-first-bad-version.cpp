// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left=1;
        int right=n;
        int flag;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(isBadVersion(mid))
            {
                flag=mid;
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }
        return flag;
    }
};