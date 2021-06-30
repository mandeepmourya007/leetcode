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
        
        if(root==NULL) return {};
        queue<TreeNode *> q;
        q.push(root);
        bool ltor=1;
        vector<vector<int>> ans;
        while(q.size())
        {
            int n=q.size();
            vector<int> row(n);
            for(int i=0;i<n;i++)
            {
                TreeNode * node = q.front();
                
                int index=ltor?i:n-i-1;
                row[index]=node->val;
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                q.pop();
            }
            ltor=!ltor;
            ans.push_back(row);
            
        }
        return ans;
        
    }
};
