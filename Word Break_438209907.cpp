class Solution {
public:
    
    int sol(string s, vector<string>& wordDict,vector<int>&dp)
    {
         int n=s.size();
        if(n==0)
            return 1;
        
        if(dp[s.size()]!=-1)
            return dp[s.size()];
          for(int i=0;i<wordDict.size();i++)
        {
            int l=wordDict[i].size();
            string sub=s.substr(0,l);
            if(sub==wordDict[i])
            {
        

                if(s==sub)
                    return true;
              string  ss=s.substr(l,s.size());
               if ( sol(ss,wordDict,dp)) return dp[s.size()]=1;
            }
        }
       
        return dp[s.size()]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
    
       
        int n=s.size();
        vector<int>dp(s.size()+1,0);
        dp[0]=1;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(dp[j])
                {
                    string sub=s.substr(j,i-j);
                    cout<<sub<<" ";
                    for(int k=0;k<wordDict.size();k++)
                    {
                        if(sub==wordDict[k])
                        {
                            dp[i]=1;
                            break;
                        }
                    }
                    
                }
                if(dp[i])
                    break;
            }
            
            
        }
        
        return dp[n];        
        
      // return sol(s,wordDict,dp);
    }
};
