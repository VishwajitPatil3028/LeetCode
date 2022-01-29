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
    
    void rootToLeaf(TreeNode* root, string currentString, int* answer)
    {
        if(root->left == NULL && root->right == NULL)
        {
            currentString += to_string(root->val);
            answer[0] += stoi(currentString,0,2);
            return;    
        }
        
        string curr = to_string(root->val);
        
        if(root->left != NULL)
            rootToLeaf(root->left,currentString+curr,answer);
        
        if(root->right != NULL)
            rootToLeaf(root->right,currentString+curr,answer);
        
    }
    
    int sumRootToLeaf(TreeNode* root) {
        int* answer = new int[1] ;
        answer[0] = 0 ;     
                
        rootToLeaf(root,"",answer);
        
        return answer[0];
    }
    
    
};