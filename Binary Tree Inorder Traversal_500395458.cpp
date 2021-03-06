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
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> ans;
        stack<TreeNode *> s;
        while(1)
        {
            while(root)
            {
                s.push(root);
                root=root->left;
            }
            if(s.empty()) break;
            TreeNode * t=s.top();
            ans.push_back(t->val);
            s.pop();
            
            root=t->right;
        }
        return ans;
            
    }
};
