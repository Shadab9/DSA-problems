class Solution {
public:
    int trap(vector<int>& height) {
        int size=height.size();
        vector<int>left(size);
        vector<int>right(size);
        int lm=height[0],rm=height[size-1];
        for(int i=0;i<size;i++)
        {
            left[i]=lm;
            lm=max(lm,height[i]);
        }
        for(int i=size-1;i>=0;i--)
        {
            right[i]=rm;
            rm=max(rm,height[i]);
        }
        int ans=0;
        
        
        for(int i=0;i<size;i++)
        {
            ans+=max(0,min(left[i],right[i])-height[i]);
        }
        return ans;
    }
};