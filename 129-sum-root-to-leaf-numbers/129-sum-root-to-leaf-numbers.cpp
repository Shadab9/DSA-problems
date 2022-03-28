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
    
    void sumNumbersUtil(TreeNode* root,int curr,int &ans)
    {
        if(root==nullptr)
            return;
        if(root->left==nullptr and root->right==nullptr)
        {
            curr=(curr*10)+(root->val);
            ans+=curr;
            return;
        }
        curr=(curr*10)+(root->val);
        sumNumbersUtil(root->left,curr,ans);
        
        sumNumbersUtil(root->right,curr,ans);
        
    }
    int sumNumbers(TreeNode* root) {
        
       int curr=0,ans=0;
        sumNumbersUtil(root,curr,ans);
        
        return ans;
    }
};