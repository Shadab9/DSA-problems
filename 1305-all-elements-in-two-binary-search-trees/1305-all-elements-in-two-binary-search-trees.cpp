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
    void getInorder(TreeNode* root,vector<int>&t)
    {
        if(root)
        {
            getInorder(root->left,t);
            t.push_back(root->val);
            getInorder(root->right,t);
        }
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        if(root1==nullptr and root2==nullptr)
            return {};
        vector<int>result;
        vector<int>t1;
        vector<int>t2;
        getInorder(root1,t1);
        getInorder(root2,t2);
        int i=0,j=0;
        while(i<t1.size() and j<t2.size())
        {
            if(t1[i]<t2[j])
            {
                result.push_back(t1[i]);
                i++;
            }
            else
            {
                result.push_back(t2[j]);
                j++;
            }
        }
        while(i<t1.size())
        {
            result.push_back(t1[i]);
                i++;
        }
        while(j<t2.size())
        {
            result.push_back(t2[j]);
                j++;
        }
        return result;
    }
};