class Solution {
public:
    
//      if (todo[node]) {
//             return false;
//         }
//         if (done[node]) {
//             return true;
//         }
//         todo[node] = done[node] = true;
//         for (int neigh : g[node]) {
//             if (!acyclic(g, todo, done, neigh, order)) {
//                 return false;
//             }
//         }
//         order.push_back(node);
//         todo[node] = false;
//         return true;
    
    
    
    bool directedCycle(vector<vector<int>>& graph, vector<int>& inRec, vector<int>& visited, 
        int k,vector<int>&ans)
{
    if (inRec[k])  // bro we got cycle 
        return true;
    // if its visited we already checked its neighours
    if (visited[k])
        return false;
    inRec[k] = 1;
    visited[k] = 1;
    for (int i = 0;i < graph[k].size();i++)
        if (directedCycle(graph, inRec, visited, graph[k][i],ans))
            return true; // neighbors cycle
    inRec[k] = 0;
        ans.push_back(k);
    return false;
}


    
    void cycle(vector<vector<int>> g,int i,vector<int> &ans,vector<int> &done,vector<int> 
        &todo,bool &isc)
    {
        if(done[i])
        {
            return ;
        }   
        if(todo[i])
        {
            isc=true;
            
            return ;
        }
        if(isc)
            return ;
        done[i]=1,todo[i]=1;
        int n=g[i].size();
        for(int i=0;i<n;i++)
        {
            if(!isc)
            cycle(g,i,ans,done,todo,isc);
            else return;
        }
        if(!isc)
            ans.push_back(i);
        todo[i]=0;
    }
   void buildG(vector<vector<int>> ed, int n,vector<vector<int>> &g)
    {
       int e=ed.size();
       for(int i=0;i<e;i++)
           g[ed[i][0]].push_back(ed[i][1]);
       
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
    
//         vector<int> ans,todo(numCourses,0),done(numCourses,0);
//         vector<vector<int>> g(numCourses);
//         buildG(prerequisites,numCourses,g);
//         bool isc=0;
//         cycle(g,numCourses,ans,done,todo,isc);
        
        
//         if(!isc)
//         return ans;
        int c=numCourses;
              vector<vector<int>> g(numCourses);
    vector<int> v(c,0),incall(c,0);
        for(int i=0;i<prerequisites.size();i++)
        {
            
        
            g[prerequisites[i][0]].push_back(prerequisites[i][1]);
            
        }
        
         vector<int> ans;
        for(int i=0;i<c;i++)
            if(v[i]==0 && directedCycle(g,incall,v,i,ans))
                return {};       
        return ans;

        
    }
    

    
    
};
