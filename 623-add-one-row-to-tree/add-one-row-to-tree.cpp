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

    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(!root) return root;
        if(depth==1)
        {
            TreeNode* node = new TreeNode(val);
            node->left = root;
           return node;
        }
        depth--;
        if(depth==1)
        {
            TreeNode* node = new TreeNode(val);
            node->left = root->left;
            root->left = node;
            node = new TreeNode(val);
            node->right = root->right;
            root->right = node;
            
            return root;
        }
        addOneRow(root->left,val,depth);
        addOneRow(root->right,val,depth);



        return root;
       
        
    }
};