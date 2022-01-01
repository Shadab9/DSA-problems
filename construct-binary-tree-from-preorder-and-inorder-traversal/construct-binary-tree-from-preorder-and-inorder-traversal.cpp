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
    int preInd=0;
    int find(vector<int>& inorder,int start,int end,int target)
    {
        for(int i=start;i<=end;i++)
        {
            if(inorder[i]==target)
                return i;
        }
        return -1;
    }
    TreeNode* build(vector<int>& preorder,vector<int>& inorder,int start,int end)
    {
        if(start>end)
            return nullptr;
        TreeNode* root=new TreeNode( preorder[preInd++]);
        int ind=find(inorder,start,end,root->val);
        if(ind!=-1)
        {
            root->left=build(preorder,inorder,start,ind-1);
            root->right=build(preorder,inorder,ind+1,end);
        }
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder,inorder,0,preorder.size()-1);
    }
};