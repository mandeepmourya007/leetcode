class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
     
        vector<int> c(n,1e5);
        c[src]=0;
        
        for(int  i=0;i<=K;i++)
        {
        vector<int> dis(c);
            
            for( auto arr: flights)
            {
                   if(dis[arr[0]]!=INT_MAX )
                       dis[arr[1]]=min(dis[arr[1]],c[arr[0]] +arr[2]);
            }
        c=dis;
        }
        
        if(c[dst]==1e5)
            return -1;
        return c[dst];
    }
};
