class Solution {
public:
    
   void help(vector<vector<int>> &rs, vector<int> &ans,vector<int>& candidates, int target , 
       int n)
    {
       
       if(target<0)
       {
           return;
       }
       if( target==0)
       {
           rs.push_back(ans);
           // ans.clear();
           return;
       }
       // if(n==candidates.size())
       //     return ;
       for(int i=n;i<candidates.size();i++)
       {
           if(target- candidates[i]>=0)
          { ans.push_back(candidates[i]);
                    
           help(rs,ans,candidates,target-candidates[i],i);
           ans.pop_back();}
       }
       
       // ans.push_back(candidates[n-1]);
       // help(rs, ans, candidates, target-candidates[n-1] , n);
       //  ans.pop_back(candidates[n-1]);
       // help(rs, ans, candidates, target, n-1);
       
       
       
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            vector<vector<int>> rs;
        vector<int>ans;
        help(rs, ans, candidates, target, 0);
        return rs;
    }
};
