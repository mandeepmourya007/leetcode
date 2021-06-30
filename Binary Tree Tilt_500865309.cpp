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
     int sum(TreeNode * root,int &ans)
     {
        if(root==NULL)
            return 0;
        if(root->left==NULL and root->right==NULL)
            return root->val;
        
        int left= sum(root->left,ans);
        int right=sum(root->right,ans);
         ans+= abs(left-right);
        return root->val+ left+right;
     }
    
    int findTilt(TreeNode* root) {
        if(root==NULL)
            return 0;
        int ans=0;
        sum(root,ans);
        return ans;
        
    }
};
