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
    
       
        vector<int>dp(s.size()+1,-1);
        dp[0]=1;
      return sol(s,wordDict,dp);
    }
};
