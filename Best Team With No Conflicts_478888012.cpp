class Solution {
public:
    
static    bool cmp(pair<int,int>&a,pair<int,int>&b)
    {
       
    if(a.second==b.second)
           return  a.first<b.first;
    return a.second<b.second;
//         if(a.second<b.second)
//           return  a.second<b.second;
        
//       return      a.first<b.first;
        
    }
    
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        
        vector<pair<int,int>> sg;
        int n=ages.size();
        for(int i=0;i<n;i++)
        {
            sg.push_back({scores[i],ages[i]});
        }
        
        sort(sg.begin(),sg.end(),cmp);
        
        int ans=0;
        int dp[n];
        for(int i=0;i<n;i++)
        {
            
            dp[i]=sg[i].first ;
            for(int j=0;j<i;j++)
            {
                
                
                if( sg[j].first<=sg[i].first and   dp[i]<dp[j] + sg[i].first)
                    dp[i]=dp[j] + sg[i].first;
                
            }
                ans=max(ans,dp[i]);
        }
            
    return ans;
        
        
    }
};
