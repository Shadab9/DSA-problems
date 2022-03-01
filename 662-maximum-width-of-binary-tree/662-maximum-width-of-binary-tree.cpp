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
        // queue<pair<TreeNode*,unsigned long long int>>q;
        // q.push({root,0});
        // int ans=0;
        // while(!q.empty())
        // {
        //     int size=q.size();
        //     int first,second;
        //     for(int i=0;i<size;i++)
        //     {
        //         auto temp=q.front();
        //         TreeNode* node=temp.first;
        //         long long int tempval=temp.second;
        //         q.pop();
        //         if(i==0)
        //             first=temp.second;
        //         if(i==size-1)
        //             second=temp.second;
        //         if(node->left)
        //             q.push({node->left,2*tempval*1ll+1});
        //         if(node->right)
        //             q.push({node->right,2*tempval*1ll+2});
        //     }
        //     ans=max(ans,second-first+1);
        // }
        // return ans;
        long ans = 0; 
        queue<pair<TreeNode*, long>> q; q.emplace(root, 0); 
        while (q.size()) {
            ans = max(ans, q.back().second - q.front().second + 1); 
            int offset = q.front().second; 
            for (int sz = q.size(); sz; --sz) {
                auto [node, x] = q.front(); q.pop(); 
                x -= offset; 
                if (node->left) q.emplace(node->left, 2*x); 
                if (node->right) q.emplace(node->right, 2*x+1); 
            }
        }
        return ans; 
    }
};