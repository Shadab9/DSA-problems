/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    void clone(Node* node,Node* copy,vector<Node*>&vis)
    {
        vis[copy->val]=copy;
        for(auto it:node->neighbors)
        {
            if(vis[it->val]==NULL)
            {
                Node* newNode=new Node(it->val);
                (copy->neighbors).push_back(newNode);
                clone(it,newNode,vis);
            }
            else
            {
                (copy->neighbors).push_back(vis[it->val]);
            }
        }
    }
    Node* cloneGraph(Node* node) {
        if(node==nullptr)
            return node;
        vector<Node*>vis(500,NULL);
        Node* copy=new Node(node->val);
        clone(node,copy,vis);
        return copy;
   }
};