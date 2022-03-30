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
    string findDuplicateUtil(TreeNode* root,unordered_map<string,int>&mp,vector<TreeNode*>&result)
    {
        if(root==nullptr)
            return "x";
        string x=findDuplicateUtil(root->left,mp,result);
        string y=findDuplicateUtil(root->right,mp,result);
        string z=to_string(root->val)+","+x+","+y;
        mp[z]++;
        if(mp[z]==2)
            result.push_back(root);
        return z;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*>result;
        unordered_map<string,int>mp;
        findDuplicateUtil(root,mp,result);
        
        return result;
        
    }
};