/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    
    private:
    void dfs( Node * node, vector<int>& preorder)
    {
        if(node == NULL)
        {
            return;
        }
        
        preorder.push_back(node->val);
        for(Node* child : node->children)
        {
            dfs(child,preorder);
        }
    }
    
    public:
        vector<int> preorder(Node* root) {
            vector<int> preorder;
            dfs(root,preorder);
            return preorder;
        }
};