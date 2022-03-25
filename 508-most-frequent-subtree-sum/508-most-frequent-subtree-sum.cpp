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
    unordered_map<int,int>mp;
    int subTreeSum(TreeNode* root)
    {
        if(root==nullptr)
            return 0;
        int x=subTreeSum(root->left);
        int y=subTreeSum(root->right);
        int z=x+y+root->val;
        mp[z]+=1;
        return z;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int>result;
        subTreeSum(root);
        int mx=INT_MIN;
        unordered_map<int,vector<int>>temp;
        for(auto it:mp)
        {
            if(it.second>=mx)
            {
                temp[it.second].push_back(it.first);
                mx=it.second;
            }
        }
        return temp[mx];
    }
};