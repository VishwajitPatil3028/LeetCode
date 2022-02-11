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
    void leftSideView(TreeNode* root , int level, set<int> &hashSet, vector<int> &answer)
    {
        if(root == NULL)
            return;

        if(hashSet.find(level)==hashSet.end())
        {
            hashSet.insert(level);
            answer.push_back(root->val);
        }

        leftSideView(root->right,level+1,hashSet,answer);
        leftSideView(root->left,level+1,hashSet,answer);
        

        return;

    }
    
    
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>answer;
        set<int>s;
        leftSideView(root,1,s,answer);
   
        return answer;
    }
};