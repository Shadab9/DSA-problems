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
    unordered_map<string,int>mp;
    string duplicate(TreeNode* root)
    {
        if(root==nullptr)
            return "x";
        string x=duplicate(root->left);
        string y=duplicate(root->right);
        string z=x+","+y+","+to_string(root->val);
        mp[z]=1;
        return z;
    }
    string duplicates(TreeNode* root)
    {
        if(root==nullptr)
            return "x";
        string x=duplicate(root->left);
        string y=duplicate(root->right);
        string z=x+","+y+","+to_string(root->val);
        mp[z]+=1;
        return z;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        duplicate(root);
        duplicates(subRoot);
        for(auto it:mp)
        {
            if(it.second>1)
                return true;
        }
        return false;
    }
};