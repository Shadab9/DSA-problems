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
    void sumUtil(TreeNode* root,vector<int>&temp,vector<vector<int>>&result)
    {
        if(root==nullptr)
            return;
        if(root->left==nullptr and root->right==nullptr)
        {
            vector<int>base=temp;
            base.push_back(root->val);
            result.push_back(base);
            return;
        }
        
        temp.push_back(root->val);
        sumUtil(root->left,temp,result);
        sumUtil(root->right,temp,result);
        temp.pop_back();
    }
    int sumNumbers(TreeNode* root) {
        vector<vector<int>>result;
        vector<int>temp;
        sumUtil(root,temp,result);
         int sum=0;
        for(auto it:result)
        {
            string x="";
            for(auto i:it)
                x=x+to_string(i);
            cout<<x<<endl;
            sum+=stoi(x);
        }
        return sum;
    }
};