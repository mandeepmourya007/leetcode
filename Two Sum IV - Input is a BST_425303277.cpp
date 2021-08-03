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
//     TreeNode * find(TreeNode *root,int data)
//     {
        
//         if(!root)
//             return NULL ;
//         if(root->val==data)
//             return root;
//         if(root->val>data)
//             return find(root->left,data);
        
//         return find(root->right,data);
   
            
//     }
//     void solve(TreeNode * root,TreeNode *t,int k,bool &ans)
//     {
        
//         if(!root)
//             return ;
        
//         int data =(k-root->val);
       
//         TreeNode * temp;
//         if(temp=find(t,data))
//            { 
//             if(temp &&temp->val!=root->val)
//             {
//                 ans=true;
//                     return;
//   }         } 
//         solve(root->left,t,k,ans);
       
//         solve(root->right,t,k,ans);
//     }
   void  inorder(TreeNode* root,map<int,int>&m,bool &ans,int k)
   {
       if(!root)
           return ;
       inorder(root->left,m,ans,k);
           if(m.find(k-root->val)!=m.end())
           {
               ans=true;
               return ;
           }
       else
           m[root->val]=1;
       inorder(root->right,m,ans,k);
       
       
   }
    bool findTarget(TreeNode* root, int k) {
        
        bool ans=false;
        map<int,int> m;
        inorder(root,m,ans,k);
        return ans;
    }
};
