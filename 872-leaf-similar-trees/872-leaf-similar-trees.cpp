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

private: 
    void isSimilar(TreeNode* root, vector<int>& v){
        if(root->left == NULL && root->right == NULL){
            v.push_back(root->val);
            return;
        }
        
        if(root->left != NULL)
            isSimilar(root->left,v);
        if(root->right != NULL)
            isSimilar(root->right,v);
    }
    
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> a;
        vector<int> b;
        
        isSimilar(root1,a);
        isSimilar(root2,b);
        
        return a == b;
    }
};