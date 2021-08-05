class Solution {
public:
    
    bool check(string &s,string &b)
    {
        int f=0;
        int n=s.size();
        if(s.size()!=b.size())
            return 0;
        for(int i=0;i<n;i++)
            if(s[i]!=b[i])
             f++;   
                     
        return f==1;
        
    }
    
    
    int solve(string &bw ,string &ew,set<string> &wl,int &ans)
    {
        queue<string> q;  
        int dist=1;
        q.push(bw);
        
        while(!q.empty())
        {
            int qn=q.size();
            for(int i=0;i<qn;i++)
            {
                string su=q.front();
                q.pop();
                    if(su==ew)
                    {
                        ans=dist;
                        return dist;
                    }
//                 for(string sv:wl)
//                 {
                
//                     if( check(su,sv))
//                     {
//                         q.push(sv);
//                         wl.erase(sv);
//                     }
//                 }
                
                for(int i=0;i<su.size();i++)
                {

                    string t=su;
                    
                    for(int a='a';a<='z';a++)
                    {
                        if(su[i]==a) continue;
                        t[i]=a;
                        if(wl.find(t)!=wl.end())
                        {
                            q.push(t);
                            wl.erase(t);
                        }
                    }
                }
            
        }
            dist++;
        }
        return ans= 0;
        
        
    }
    int ladderLength(string beginWord, string endWord, vector<string>& wl) {
        
        set<string> s(wl.begin(),wl.end());
        if(s.find(endWord)==s.end())
            return 0;
        int ans=0;
        solve(beginWord,endWord,s,ans);
        
        return ans;
    }
};
