class Solution {
public:
    int change(int a, vector<int>& coins) {
     
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int>(a+1,-1));
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=a;j++)
            {
                if(j==0)
                    dp[i][j]=1;
                else if(i==0)
                    dp[i][j]=0;
                else if(coins[i-1]<=j)
                    dp[i][j]=  dp[i][j-coins[i-1]] + dp[i-1][j];
                else dp[i][j]=dp[i-1][j];
            }
        }
        
        return dp[n][a];
        
        
    }
};
