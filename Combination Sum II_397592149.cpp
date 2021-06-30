class Solution {
public:
    
    void help(vector<int>& candidates, int target,int n,vector<vector<int>> &rs,vector<int
        >&ans)
    {
        if(target==0)
        {
            rs.push_back(ans);
            return ;
        }
        if(target<0)
            return ;
        for(int i=n;i<candidates.size();i++)
        {
            if(i>n && candidates[i]==candidates[i-1])
                continue;
            // if(candidates[i]>target)
            //     return;
            ans.push_back(candidates[i]);
            help(candidates,target-candidates[i],i+1,rs,ans);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> rs;
        vector<int> ans;
        help(candidates,target,0,rs,ans);
        return rs;
    }
};
