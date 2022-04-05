class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int size=s.size();
        int left=0,right=size-1,ans=0;
        while(left<right)
        {
            int i=left,j=right;
            while(s[i]!=s[j])
                j--;
            if(i==j)
            {
                swap(s[j],s[j+1]);
                ans++;
                continue;
            }
            else
            {
                while(j<right)
                {
                    swap(s[j],s[j+1]);
                    ans++;
                    j++;
                }
            }
            
            left++;
            right--;
        }
        return ans;
    }
};