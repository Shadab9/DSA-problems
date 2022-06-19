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
    vector<TreeNode*> allPossibleBSTUtil(int r,unordered_map<int,vector<TreeNode*>>&mp)
    {
        vector<TreeNode*>result;
        if(r<0||r%2==0){
        return result;
        }
        if(mp.find(r)!=mp.end())
            return mp[r];
        if(r==1)
        {
            result.push_back(new TreeNode(0));
            mp[r]=result;
            return result;
        }
        for(int i=1;i<r;i++)
        {
            vector<TreeNode*>leftTree=allPossibleBSTUtil(i-1,mp);
            vector<TreeNode*>rightTree=allPossibleBSTUtil(r-i,mp);
            for(auto it:leftTree)
            {
                for(auto it1:rightTree)
                {
                    TreeNode* root=new TreeNode(0);
                    root->left=it;
                    root->right=it1;
                    // if((it==nullptr and it1==nullptr ) or(it!=nullptr and it1!=nullptr))
                    result.push_back(root);
                }
            }
        }
        return mp[r]=result;
    }
    
    vector<TreeNode*> allPossibleFBT(int n) {
        unordered_map<int,vector<TreeNode*>>mp;
        vector<TreeNode*>result;
        return allPossibleBSTUtil(n,mp);
        
    }
};