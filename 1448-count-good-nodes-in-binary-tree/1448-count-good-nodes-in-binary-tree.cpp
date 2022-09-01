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
    int count=0;
    void dfs(TreeNode*root,int curr)
    {
        if(!root)
            return;
        if(root->val>=curr)
        {
            count++;
            curr=root->val;
        }
        dfs(root->left,curr);
        dfs(root->right,curr);
    }
    int goodNodes(TreeNode* root) {
        dfs(root,root->val);
        return count;
    }
};