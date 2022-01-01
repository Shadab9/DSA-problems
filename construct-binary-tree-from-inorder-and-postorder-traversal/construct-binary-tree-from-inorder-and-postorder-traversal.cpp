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
    int find(vector<int>& inorder,int target,int start,int end)
    {
        for(int i=start;i<=end;i++)
        {
            if(inorder[i]==target)
                return i;
        }
        return -1;
    }
    TreeNode* build(vector<int>& inorder,vector<int>& postorder,int start,int end,int &postind)
    {
        if(start>end)
            return nullptr;
        TreeNode* root=new TreeNode(postorder[postind--]);
        int ind=find(inorder,root->val,start,end);
        if(ind!=-1)
        {
            root->right=build(inorder,postorder,ind+1,end,postind);
            root->left=build(inorder,postorder,start,ind-1,postind);
        }
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
         int n=postorder.size()-1;
        return build(inorder,postorder,0,n,n);
    }
};