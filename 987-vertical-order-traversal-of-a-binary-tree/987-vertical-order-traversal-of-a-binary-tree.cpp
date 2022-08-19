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
    map<int,vector<pair<int,int>>>d;
    void verticalorder(TreeNode*root,int k,int m)
    {
        if(!root)
            return;
        d[k].push_back({m,root->val});
        verticalorder(root->left,k-1,m+1);
        verticalorder(root->right,k+1,m+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        verticalorder(root,0,0);
        vector<vector<int>>ans;
        for(auto x:d){
            sort(x.second.begin(),x.second.end());
            vector<int>res;
        for(auto y:x.second)
        {
            res.push_back(y.second);
        }
        ans.push_back(res);
        }
        return ans;
    }
};