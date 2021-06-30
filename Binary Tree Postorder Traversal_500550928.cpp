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
    vector<int> postorderTraversal(TreeNode* root) {
     
        vector<int> ans;
        stack<TreeNode *> s;
        TreeNode *lastNode=NULL;
        while(1)
        {
            while(root)
            {
                s.push(root);
                root=root->left;
            }
            if(s.empty()) break;

            TreeNode * t=s.top();
           
            if(t->right && t->right != lastNode)
                    root = t->right;
                
            else
            {
                ans.push_back(t->val);
                lastNode = s.top();
                s.pop();
            }
            
        }
        return ans;
            
    }
};
