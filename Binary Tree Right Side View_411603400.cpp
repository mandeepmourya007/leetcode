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
    
    void solve(TreeNode * r,int l,vector<int> &ans)
{
    if(r)
    {
        if(l>ans.size())   
        {    ans.push_back(r->val);
            // *ml=l;
        }
        solve(r->right,l+1,ans);
        solve(r->left,l+1,ans);
    }
    
}

    vector<int> rightSideView(TreeNode* root) {
        
         vector<int> ans;
    solve(root,1,ans);

   return ans;
        
    }
};
