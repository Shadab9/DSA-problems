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
    int minDepth(TreeNode* root) {
         if(root==nullptr)
            return 0;
        queue<TreeNode*>q;
        q.push(root);
        int c=0;
        while(!q.empty())
        {
            int n=q.size();
            while(n>0)
            {
            TreeNode* temp=q.front();
            if(temp->left==nullptr and temp->right==nullptr)
                return ++c;
            q.pop();
            if(temp->left!=nullptr)
            q.push(temp->left);
            if(temp->right!=nullptr)
            q.push(temp->right);
                n--;
            }
            c++;
        }
        return c;
    }
};