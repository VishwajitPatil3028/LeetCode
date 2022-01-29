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
    void sum(TreeNode* root, string s, int* ans){
        if(root->left == NULL && root->right == NULL){
            s += to_string(root->val);
            ans[0] += stoi(s);
            return;
        }
        
        string curr = to_string(root->val);
        
        if(root->left != NULL)
            sum(root->left,s+curr,ans);
        if(root->right != NULL)
            sum(root->right,s+curr,ans);
        
    }
    
public:
    int sumNumbers(TreeNode* root) {
        int* ans = new int[1];
        ans[0] = 0;
        
        sum(root,"",ans);
        
        return ans[0];
    }
};