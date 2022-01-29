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
    void rootToLeaf(TreeNode* root, string currentStr, vector<string>&ans){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            currentStr+= to_string(root->val);  
            ans.push_back(currentStr);
            return;
        }
        
        currentStr+= to_string(root->val)+"->";
       rootToLeaf(root->left,currentStr,ans); 
       rootToLeaf(root->right,currentStr,ans);  
    }
    
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        rootToLeaf(root,"",ans);
        
        return ans;
    }
    
};