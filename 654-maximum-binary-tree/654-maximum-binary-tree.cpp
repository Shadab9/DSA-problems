/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int find(vector<int>&nums,int start,int end)
    {
        int mx=nums[start];
        int mxind=start;
        for(int i=start;i<=end;i++)
        {
            if(nums[i]>mx)
            {
                mx=nums[i];
                mxind=i;
            }
        }
        return mxind;
    }
    TreeNode* constructUtil(vector<int>& nums,int start,int end)
    {
        if(start>end)
            return nullptr;
        int ind=find(nums,start,end);
        TreeNode* root=new TreeNode(nums[ind]);
        root->left=constructUtil(nums,start,ind-1);
        root->right=constructUtil(nums,ind+1,end);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size()==0)
            return nullptr;
        return constructUtil(nums,0,nums.size()-1);
    }
};