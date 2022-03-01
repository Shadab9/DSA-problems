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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,unsigned long long int>>q;
        q.push({root,0});
        int ans=0;
        while(!q.empty())
        {
            int size=q.size();
            int first,second;
            for(int i=0;i<size;i++)
            {
                auto temp=q.front();
                TreeNode* node=temp.first;
                 if(i==0)
                    first=temp.second;
                long long int tempval=temp.second-first;
                q.pop();
               
                if(i==size-1)
                    second=temp.second;
                if(node->left)
                    q.push({node->left,2*tempval*1ll+1});
                if(node->right)
                    q.push({node->right,2*tempval*1ll+2});
            }
            ans=max(ans,second-first+1);
        }
        return ans;
       
    }
};