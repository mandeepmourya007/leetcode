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
    
    int height(TreeNode * r)
{
    
    if(!r)
        return 0;
    int ri=0,l=0;
    
        l=1+height( r->left);

        ri=1+height( r->right);
    
    return max(l, ri);
    
}

    
    int diameterOfBinaryTree(TreeNode* node) {
        
    if(!node)
        return 0;
    
    int dlr=max(diameterOfBinaryTree(node->left),diameterOfBinaryTree(node->right));
      
    return max(dlr,height(node->left) + height(node->right));

    }
};
