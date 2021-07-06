class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {

        
        int n = coins.size();
        int dp[n][amount+1];
        for (int i = 0; i < n; i++)
            for (int j = 0; j <= amount; j++)
                dp[i][j] = INT_MAX;

        for (int i = 0; i < n; i++)
            dp[i][0] = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= amount; j++) {
                if (i > 0)
                    dp[i][j] = dp[i - 1][j]; 
                if (j >= coins[i]) {
                    if (dp[i][j - coins[i]] != INT_MAX)
                        dp[i][j] = min(dp[i][j], dp[i][j - coins[i]] + 1); 
                }
            }
        }

        return (dp[n - 1][amount] == INT_MAX ? -1 : dp[n - 1][amount]);

        
        
        //         vector<int> dp(amount+1,amount+1);
//      dp[0]=0;
//      for(auto x:coins){
//          for(int i=x;i<=amount;i++){
//              dp[i]=min(dp[i],dp[i-x]+1);
//          }
//      }
//      return dp[amount]>=amount+1 ? -1:dp[amount];

    }
        
        
        
    }
;
