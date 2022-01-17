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
    void sum(TreeNode* root, bool isLeft, int &ans)
    {
        if(root == NULL)
            return;
        
        if(root->left == NULL && root->right == NULL && isLeft)
        {
            ans += root->val;
        }
        
        sum(root->left,true,ans);
        sum(root->right,false,ans);
    }
    
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        sum(root,false,ans);
        
        return ans;
    }
};