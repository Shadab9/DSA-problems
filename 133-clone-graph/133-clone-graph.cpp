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
    Node* clone(Node* copy,Node* node,vector<Node*>&vis)
    {
        vis[copy->val]=copy;
        for( auto it:node->neighbors)
        {
            if(vis[it->val]==NULL)
            {
                Node* newNode=new Node(it->val);
                (copy->neighbors).push_back(newNode);
                clone(newNode,it,vis);
            }
            else
            {
                (copy->neighbors).push_back(vis[it->val]);
            }
        }
        return copy;
            
    }
    Node* cloneGraph(Node* node) {
        if(node==nullptr)
            return node;
        Node* copy=new Node(node->val);
        vector<Node*>vis(500,NULL);
        
        clone(copy,node,vis);
        return copy;
        
    }
};