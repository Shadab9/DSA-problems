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
    bool isValidBST(TreeNode* root,long int min=LONG_MIN,long int max=LONG_MAX) {
        if(root==nullptr)
            return 1;
        if(root->val<=min or root->val>=max)
            return 0;
        
        return isValidBST(root->left,min,root->val) and isValidBST(root->right,root->val,max);
    }
};