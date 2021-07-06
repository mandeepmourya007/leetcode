class Solution {
public:
    
    bool dfs(   vector<vector<int>> &g,vector<int> &inc,vector<int> &v,int k)
    {
        if(inc[k])
          {
            cout<<k;
            return true;
        }
        inc[k]=1;
        v[k]=1;
        for(int i=0;i<g[k].size();i++)
        {
            if(v[g[k][i]]==0)
            {
                
               if( dfs(g,inc,v,g[k][i]))
                   return true;
                 }
            else if(inc[g[k][i]])
                    return true;
           
            
        }
        
        inc[k]=0;
        return false;
        
    }
    
    
    bool canFinish(int c, vector<vector<int>>& p) {
      
      vector<vector<int>> g(c);
    vector<int> v(c,0),incall(c,0);
        for(int i=0;i<p.size();i++)
        {
            
        
            g[p[i][0]].push_back(p[i][1]);
            
        }
        
        
        for(int i=0;i<c;i++)
            if(v[i]==0 && dfs(g,incall,v,i))
                return false;       
        return true;
        
    }
};
