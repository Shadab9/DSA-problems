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
    // int postIndex;
    int find(vector<int>&inorder,int start,int end,int target)
    {
        for(int i=start;i<=end;i++)
        {
            if(inorder[i]==target)
                return i;
        }
        return -1;
    }
    TreeNode* buildTreeUtil(vector<int>& inorder,vector<int>& postorder,int start,int end,int& postIndex)
    {
        if(start>end)
            return nullptr;
        TreeNode* root=new TreeNode(postorder[postIndex--]);
        int index=find(inorder,start,end,root->val);
        if(index!=-1)
        {
            root->right=buildTreeUtil(inorder,postorder,index+1,end,postIndex);
            root->left=buildTreeUtil(inorder,postorder,start,index-1,postIndex);
        }
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postIndex=postorder.size()-1;
        return buildTreeUtil(inorder,postorder,0,postorder.size()-1,postIndex);
    }
};