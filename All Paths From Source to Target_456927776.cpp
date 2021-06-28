class Solution {
public:
    
    void dfs(vector<vector<int>>&g,int i,vector<vector<int >> &ans,vector<int> &t,int n,vector
        <bool>& vis)
    {
        
        if(i==n)
            ans.push_back(t);
        if(vis[i])
            return ;
        // vis[i]=1;
        for(int x: g[i])
        {
        t.push_back(x);

            dfs(g,x,ans,t,n,vis);
        
        // if(x==n)
        // {
        // ans.push_back(t);
        // }
        
        t.pop_back();        
        
        }
        
        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        // int n = graph.size();
        vector<vector<int>> ans;
        vector<int>t;
        int n=graph.size();
vector<bool>vis(n,0);
        // for(int i=0;i<n-1;i++)
       {
        t.push_back(0);
        dfs(graph,0,ans,t,n-1,vis);
t.pop_back();
       } 
        return ans;
    }
};
