class Solution {
public:
    
//     int mincoin(vector<int> &cns,int x,vector<int> &dp,int i)
//     {
//         // cout<<x<<" "<<i<<"\n";
//         if(x>0 and (i==0))
//             return dp[x]=-1;
    
//         if(x==0 || i==0)
//             return 0;
//         if(dp[i]!=-1)
//             return dp[i];
//     if(cns[i-1]<=x)
//         return  dp[x]=x/cns[i-1]+ mincoin(cns,x%cns[i-1],dp,i);
    
//         return dp[x]=mincoin(cns,x,dp,i-1);
        
        
//     }
    
    int coinChange(vector<int>& coins, int a) {
        
        
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int>(a+1,INT_MAX));
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=a;j++)
            {
                if(j==0)
                    dp[i][j]=0;
                else if(i==0)
                    dp[i][j]=INT_MAX-5;
                else if(coins[i-1]<=j)
                    dp[i][j]=  min( 1+dp[i][j-coins[i-1]] , dp[i-1][j]);
                else dp[i][j]=dp[i-1][j];
            }
        }
        
//          for(int i=0;i<=n;i++)
//         {
//             for(int j=0;j<=a;j++)
//             {
            
//                 cout<<dp[i][j]<<" ";
                
//             }
//              cout<<'\n';
//         }
        return dp[n][a]==INT_MAX-5?-1: dp[n][a];
        
        
    
    }
};
