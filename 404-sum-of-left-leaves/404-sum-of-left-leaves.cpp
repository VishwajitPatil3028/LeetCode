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
    int sum(TreeNode* root, bool isLeft){
        if(root == NULL)return 0;
        
        if(root->left == NULL && root->right == NULL && isLeft == true) return root->val;
        
        return sum(root->left,true) + sum(root->right, false);
        }
    
public:
    int sumOfLeftLeaves(TreeNode* root) {
        return sum(root,false);
    }   
};