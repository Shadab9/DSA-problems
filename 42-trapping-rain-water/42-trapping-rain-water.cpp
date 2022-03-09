class Solution {
public:
    int trap(vector<int>& height) {
        int size=height.size();
        stack<int>st;
        int ans=0;
        for(int i=0;i<size;i++)
        {
            while(!st.empty() and height[st.top()]<height[i])
            {
                int temp=st.top();
                st.pop();
                if(st.empty())
                    break;
                ans+=(min(height[st.top()],height[i])-height[temp])*(i-st.top()-1);
            }
            st.push(i);
        }
        return ans;
    }
};