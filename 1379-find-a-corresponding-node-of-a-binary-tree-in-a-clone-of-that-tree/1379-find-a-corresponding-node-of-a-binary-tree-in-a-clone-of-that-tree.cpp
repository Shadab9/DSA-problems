/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void checkUtil(TreeNode* cloned,TreeNode* target,TreeNode* &ans)
    {
        if(cloned)
        {
            checkUtil(cloned->left,target,ans);
            cout<<cloned->val<<" ";
            if(cloned->val==target->val)
                ans=cloned;
            checkUtil(cloned->right,target,ans);
        }
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ans;
        checkUtil(cloned,target,ans);
        return ans;
    }
};