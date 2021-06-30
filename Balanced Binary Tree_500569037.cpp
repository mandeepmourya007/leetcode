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
    int isb(TreeNode * root)
    {
        if(root==NULL)
            return 0;
        int lh=isb(root->left);
        int rh=isb(root->right);
        if(lh==-1 or rh== -1 or abs(lh-rh)>1)
            return -1;
        return 1+ max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        
        if(root==NULL)
            return 1;
        return isb(root)!=-1;
    }
};
