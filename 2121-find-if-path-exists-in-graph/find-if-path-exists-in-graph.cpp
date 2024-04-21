class Solution {
public:
    void buildg(vector<vector<int>> &adj,vector<vector<int>>& edges)
    {
        for(auto edge :edges)
        {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

    }
    void dfs(vector<vector<int>> &adj,vector<bool>&mark,int s)
    {
        if(mark[s]==true)
            return ;
        mark[s] = true;
        for(auto neb: adj[s])    
                dfs(adj,mark,neb);
            
        

    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
                 vector<vector<int>> adj(n);
                 buildg(adj,edges);
               
                 vector<bool> mark(n,false);
                 dfs(adj,mark,source);
                 return mark[destination];
    }
};