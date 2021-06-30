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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       
        if(!root)
            return {};
        stack<TreeNode *> s1,s2;
        s1.push(root);
        vector<vector<int>> ans;
        while(!s1.empty() || !s2.empty() )
        {
            
            TreeNode *t;
            vector<int > rs;
            while(!s1.empty())
            {
                t=s1.top();
                rs.push_back(t->val);
               s1.pop()
                   ;
                if(t->left)
                    s2.push(t->left);
                if(t->right)
                    s2.push(t->right);
            }
            if(rs.size())
            ans.push_back(rs);
            rs.clear();
             while(!s2.empty())
            {
                t=s2.top();
                rs.push_back(t->val);
               s2.pop()
                   ;
                if(t->right)
                    s1.push(t->right);
            
                 if(t->left)
                    s1.push(t->left);
                }
            
            if(rs.size())
           ans.push_back(rs);
            rs.clear();
            
        }
        return ans;
        
    }
};
