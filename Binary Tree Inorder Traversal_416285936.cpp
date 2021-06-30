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
   void solve(vector<int>& rs,TreeNode *root)
    {
        if(root)
       {
                                solve(rs,root->left);

        
        rs.push_back(root->val);
         solve( rs,root->right);
    }}
    vector<int> inorderTraversal(TreeNode* root) {
                if(!root)
                    return {};
                vector<int>  rs;
        

                    solve(rs,root);
                return rs;
    }
};
