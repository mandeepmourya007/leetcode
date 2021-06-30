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


    vector<int> rightSideView(TreeNode* root) {
        
         
   queue<TreeNode *>q;
   vector<int> ans;
      if(root){ 
       q.push(root);
       while(!q.empty())
    {
        ans.push_back(q.back()->val);
        for(int i=q.size();i>0;i--)
        {
            TreeNode *x =q.front();
            q.pop();
            if(x->left)
                q.push(x->left);
            if(x->right)
                q.push(x->right);
            
        }
        
    }}
   return ans;
    
    }
};
