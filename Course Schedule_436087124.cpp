class Solution {
public:
    
bool directedCycle(vector<vector<int>>& graph, vector<int>& inRec, vector<int>& visited, int 
    k)
{
    if (inRec[k])  // bro we got cycle 
        return true;
    inRec[k] = 1;
    visited[k] = 1;
    for (int i = 0;i < graph[k].size();i++)
    {
        if (visited[graph[k][i]] == 0)
           { if (directedCycle(graph, inRec, visited, graph[k][i]))
                return true; // neighbors cycle
       } 
     // already visited and inRec 
        else if (inRec[graph[k][i]])  //got cycyle
            return true;
    }
    inRec[k] = 0;
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
            if(v[i]==0 && directedCycle(g,incall,v,i))
                return false;       
        return true;
        
    }

