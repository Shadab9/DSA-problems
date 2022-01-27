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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==nullptr and root2==nullptr)
            return nullptr;
        if(root1==nullptr)
            return root2;
        if(root2==nullptr)
            return root1;
        root1->val+=root2->val;
        mergeTrees(root1->left,root2->left);
        if(root1->left==nullptr and root2->left)
        {
            TreeNode* curr=root2->left;
            root1->left=curr;
        }
        mergeTrees(root1->right,root2->right);
        if(root1->right==nullptr and root2->right)
        {
            TreeNode* curr=root2->right;
            root1->right=curr;
        }
        return root1;
    }
};