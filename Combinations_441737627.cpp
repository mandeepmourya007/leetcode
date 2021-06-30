class Solution {
public:
    
    void solve(vector<vector<int>> &ans,vector<int>&res,int n,int k,int ind)
    {
        
       
        if(k==0)
        {
            ans.push_back(res);
            return ;
        }
        
        for(int i=ind;i<=n;i++)
        {
            res.push_back(i);
            solve(ans,res,n,k-1,i+1);
            res.pop_back();
        }
        
        
        
        
    }
    
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>> ans;
        vector<int> res;
         solve(ans,res,n,k,1);
            return ans;
    }
};
