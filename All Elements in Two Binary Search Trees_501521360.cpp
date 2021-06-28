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
    void inorder(TreeNode * root,vector<int> &v)
    {
        if(root==NULL)
            return ;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
        
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        vector<int> v1,v2,v3;
        inorder(root1,v1);
        inorder(root2,v2);
        int i=0,j=0;
        int n=v1.size(),m=v2.size();
        while(i<n and j<m)
        {
            if(v1[i]<v2[j]) v3.push_back(v1[i++]);
            else  v3.push_back(v2[j++]);
        }
        while(i<n)v3.push_back(v1[i++]);
        while(j<m)v3.push_back(v2[j++]);
        return v3;
    }
};
