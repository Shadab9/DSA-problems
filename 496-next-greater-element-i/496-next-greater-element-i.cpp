class Solution {
public:
    void nextGreaterUtil(vector<int>& arr1,vector<int>& arr2,vector<int>&result)
    {
        unordered_map<int,int>mp;
        stack<int>st;
        for(int i=0;i<arr2.size();i++)
        {
            while(!st.empty() and arr2[st.top()]<arr2[i])
            {
                mp[arr2[st.top()]]=arr2[i];
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty())
        {
            mp[arr2[st.top()]]=-1;
            st.pop();
        }
        for(int i=0;i<arr1.size();i++)
        {
            result.push_back(mp[arr1[i]]);
        }
            
            
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        nextGreaterUtil(nums1,nums2,result);
        return result;
        
    }
};