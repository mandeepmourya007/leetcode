class Solution {
public:
    
    void solve(vector<int>&nums,int ind,vector<vector<int>> &ans,vector<int> &local,int tar)
    {
        
     
        if(tar==0)
        {
            ans.push_back(local);
            return ;
        }
        if(tar<0)
            return ;
        
           if(ind==nums.size())
            return ;
        
        local.push_back(nums[ind]);
        solve(nums,ind+1,ans,local,tar-nums[ind]);
        local.pop_back();
        
        while(ind+1<nums.size()&&nums[ind]==nums[ind+1] )
        ind++;
        solve(nums,ind+1,ans,local,tar);
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& c, int target) {
        
        vector<vector<int>> ans;
        vector<int> local;
        
        sort(c.begin(),c.end());
        
        solve(c,0,ans,local,target);
        
        return ans;
        
        
    }
};
