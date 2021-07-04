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
                
  
            for( auto [v,wv]:g[u])
            {
                {
                    dist[v] = w +wv;
                    pq.push({dist[v],v,k-1});
                }
            }
       
        }
        
      return dist[dst]==INT_MAX?-1: dist[dst];      
    }
};


