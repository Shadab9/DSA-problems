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
    vector<double> averageOfLevels(TreeNode* root) {
        if(root==nullptr)
            return {};
        vector<double>result;
        
        queue<TreeNode*>q;
        q.push(root);
       
        while(!q.empty())
        {
            int n=q.size();
            int dummy=n;
            double sum=0;
            while(n--)
            {
                auto x=q.front();
                sum+=(x->val);
                q.pop();
                if(x->left)
                    q.push(x->left);
                if(x->right)
                    q.push(x->right);
            }
           result.push_back(sum/dummy);
        }
        return result;
        
    }
};