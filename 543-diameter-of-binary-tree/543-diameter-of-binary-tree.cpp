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
    int height(TreeNode* root)
    {
        if(root==nullptr)
            return 0;
        int l=height(root->left);
        int r=height(root->right);
        return l>r?l+1:r+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr)
            return 0;
        int l=height(root->left);
        int r=height(root->right);
        int op1=l+r;
        int x=diameterOfBinaryTree(root->left);
        int y=diameterOfBinaryTree(root->right);
        int op2=max(x,y);
        return max(op1,op2);
    }
};