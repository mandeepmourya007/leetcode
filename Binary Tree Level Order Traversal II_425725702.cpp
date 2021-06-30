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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        if(!root)
            return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>> ans;
        while(!q.empty() )
        {
            TreeNode * t=q.front();
            int n=q.size();
            // q.pop();
            vector<int>tv;
            for(int i=0;i<n;i++)
            {
                tv.push_back(t->val);
                if(t->left)
                    q.push(t->left);
                
                if(t->right)
                    q.push(t->right);
                q.pop();
                t=q.front();
                
                
            }
            
            ans.push_back(tv);
            tv.clear();
            
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
