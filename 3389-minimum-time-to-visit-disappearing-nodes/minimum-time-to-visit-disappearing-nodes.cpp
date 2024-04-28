class Solution {
public:
    // bool cmp(pair<int,int> &a,pair<int,int> &b)
    // {
    //    return a.first<b.first;
    // }
    struct cmp {
    bool operator() (const std::pair<int, int>& a, const std::pair<int, int>& b) const {
        // Define your comparison logic here
        return a.first > b.first; // Example: Min heap based on the first element of the pair
    }
};
    vector<int> minimumTime(int n, vector<vector<int>>& edges, vector<int>& disappear) {
        vector<vector<pair<int,int>>> adj(n);
        vector<int> ans(n,-1);
        for(int i=0;i<edges.size();i++)
        {
            auto e = edges[i];
            int u = e[0],v=e[1],w=e[2];
            adj[u].push_back({w,v});
            adj[v].push_back({w,u});
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> q;
        q.push({0,0});
        ans[0] = 0;
        while(!q.empty())
        {
                auto p = q.top();
                q.pop();
                int w = p.first;
                int u = p.second;
                // int d = disappear[v];

                if(w>ans[u]) continue;

                for(auto p : adj[u])
                {
                    int vw = p.first;
                    int v = p.second;
                    if( vw+w<disappear[v] and ( ans[v]==-1  or  vw+w<ans[v]))
                    {
                            ans[v] = vw+w;
                            q.push({ans[v],v});
                    }

                    
                }
        }

        
        return ans;
        
    }
};