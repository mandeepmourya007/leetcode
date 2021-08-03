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
    
    map<int,int> mp;
    bool findTarget(TreeNode* root, int k) 
    {
       stack<TreeNode *> ls,rs;
        TreeNode * t=root;
        while(t)
        {
            ls.push(t);
            t=t->left;
        }
        t=root;
        while(t)
        {
            rs.push(t);
            t=t->right;
            
        }
        
        while(ls.size() and rs.size() and ls.top() != rs.top())
        {
         
            TreeNode * lt=ls.top(),*rt=rs.top();
            int x=lt->val + rt->val;
            if(x==k)
                return 1;
            else if(x<k)
            {
                 lt=lt->right;
                ls.pop();
                while(lt)
                {
                    ls.push(lt);
                    lt=lt->left;
                }
            }
            else 
            {
                rt=rt->left;
                rs.pop();
                while(rt)
                {
                    rs.push(rt);
                    rt=rt->right;
                }
                
            }

        }
        return 0;
    }
};
