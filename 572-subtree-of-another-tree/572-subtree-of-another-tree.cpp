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
    string duplicate(TreeNode* root,unordered_map<string,int>&mp)
    {
        if(root==nullptr)
            return "x";
        string x=duplicate(root->left,mp);
        string y=duplicate(root->right,mp);
        string z=x+","+y+","+to_string(root->val);
        mp[z]=1;
        return z;
    }
    string duplicates(TreeNode* root,unordered_map<string,int>&mp)
    {
        if(root==nullptr)
            return "x";
        string x=duplicate(root->left,mp);
        string y=duplicate(root->right,mp);
        string z=x+","+y+","+to_string(root->val);
        mp[z]+=1;
        return z;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        unordered_map<string,int>mp;
        duplicate(root,mp);
        duplicates(subRoot,mp);
        for(auto it:mp)
        {
            if(it.second>1)
                return 1;
        }
        return 0;
    }
};