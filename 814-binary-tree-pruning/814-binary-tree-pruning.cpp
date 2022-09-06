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
    bool containone(TreeNode*root)
    {
        if(!root)
            return false;
        bool left=containone(root->left);
        bool right=containone(root->right);
        if(!left )
            root->left=NULL;
        if(!right)
            root->right=NULL;
        
        return root->val==1 || left||right;
    }
    TreeNode* pruneTree(TreeNode* root) {
        return containone(root)?root:NULL;
    }
};