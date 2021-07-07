/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans;
    void  ino( TreeNode* ro,int v) 
    {
        if(ro)
        {
            cout<<ro->val<<" ";
            if(ro->val==v)
               {
                
                ans= ro;
                return;
           } ino(ro->left,v);
           
            ino(ro->right,v);
            
        }
        
        
        // return ro;
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        int val=target->val;
        ino(cloned,val);
        return  ans; //cloned->right;// ino(cloned,val);
        
    }
};
