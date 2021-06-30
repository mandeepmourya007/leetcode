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
    
   void solve(TreeNode *root,vector<vector<int>>&ans )
    {
        queue<TreeNode*>q;
       q.push(root);
       // TreeNode * v=TreeNode()
       // q.push(NULL);
       while(!q.empty())
       {
           
            
           vector<int> temp;
            int size=q.size();
           while(size--)
           {
             TreeNode*  t=q.front();
            
               if(t->left)
                   q.push(t->left);
               if(t->right)
                   q.push(t->right);
               temp.push_back(t->val);    
             
            
               q.pop();
           }
        // auto t=q.front();
           // q.pop();
           ans.push_back(temp);
          temp.clear();
           
       }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root)
            return {};
        vector<vector<int>> ans;
        solve(root,ans);
        
        
        
        return ans;
    }
};
