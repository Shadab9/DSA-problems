class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size()==0)
            return 0;
        int i=0,j=height.size()-1,ans=0;
        while(i<j)
        {
            ans=max(ans,min(height[i],height[j])*(j-i));
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return ans;
    }
};