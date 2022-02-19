class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    
        int size=nums.size();
        vector<int>result(size,-1);
        stack<int>st;
        for(int i=0;i<2*size;i++)
        {
            while(!st.empty() and nums[i%size]>nums[st.top()])
            {
                result[st.top()]=nums[i%size];
                st.pop();
            }
            if(i<size)
                st.push(i);
        }
        return result;
    }
};