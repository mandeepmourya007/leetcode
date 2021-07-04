class Solution {
public:
 #define pii pair<int,int>     
    void buildg(vector<vector<pii>>&g,vector<vector<int>> &edges)
    {
        
        for(auto p: edges)
        {
            int s=p[0],d=p[1],w=p[2];
            g[s].push_back({d,w});
        }
         
        
    } 
    
#define tii tuple<int,int,int> 
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        vector<vector<pii>> g(n);
        
        buildg(g,flights);
        
        priority_queue<tii,vector<tii>,greater<tii>> pq;
        
        int dist[n];
        for(int i=0;i<n;i++)
            dist[i]=INT_MAX;
        
        dist[src]=0;
        K++;
        pq.push({0,src,K});

        while(!pq.empty())
        {
            auto [w,u,k]=pq.top();
            pq.pop();
            if(u==dst) return w;
            if(k==0) continue;
                
           // int u=p.second;
            //int w=p.first;
            for( auto [v,wv]:g[u])
            {
                // if( dist[u] +wv<dist[v])
                {
                    dist[v] = w +wv;
                    pq.push({dist[v],v,k-1});
                }
            }
         // K--;   
        }
        
      return dist[dst]==INT_MAX?-1: dist[dst];      
    }
};


// typedef pair<int, int> pii;
// typedef tuple<int, int, int> ti;
// class Solution {
// public:
//     int findCheapestPrice(int n, vector<vector<int>>& F, int src, int dst, int K) {
//         unordered_map<int, vector<pii> > G;
//         for(auto &f: F) {
//             G[f[0]].push_back(make_pair(f[1], f[2]));
//         }

//         vector<int> dist(n, INT_MAX);
//         dist[src] = 0;
        
//         priority_queue<ti, vector<ti>, greater<ti> > pq;
//         pq.push({0, src, K + 1});
//         while(!pq.empty()) {
//             auto [p, u, t] = pq.top(); pq.pop();
//             // if(dist[u] != p) continue;
//             if(u == dst) return p;
//             if(t == 0) continue;
//             for(auto & [v, w]: G[u]) {
//                 // if(dist[v] == INT_MAX || dist[v] > dist[u] + w) {
//                     dist[v] = p + w;
//                     pq.push({dist[v], v, t - 1});
//                 // }
//             }
//         }
//         return dist[dst] == INT_MAX? -1: dist[dst];
//     }
// };;
