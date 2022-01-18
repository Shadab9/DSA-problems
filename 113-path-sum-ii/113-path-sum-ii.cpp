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
     void pathSumUtil(TreeNode* root,int target,vector<vector<int>>&result,vector<int>&smallAns)
    {
        if(root==nullptr)
            return;
        if(root->left==nullptr and root->right==nullptr)
        {
            if(target-(root->val)==0)
            {
                vector<int>base=smallAns;
                base.push_back(root->val);
                result.push_back(base);
            }
        }
        smallAns.push_back(root->val);
        pathSumUtil(root->left,target-root->val,result,smallAns);
        pathSumUtil(root->right,target-root->val,result,smallAns);
        smallAns.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>result;
        vector<int>smallAns;
        pathSumUtil(root,targetSum,result,smallAns);
        return result;
    }
};