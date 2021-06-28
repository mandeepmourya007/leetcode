class Solution {
public:
    vector<vector<int>> dp;
    int sl(vector<int>& prices, int fee,int i,int buy)
    {
        int n=prices.size();
        int j=buy;
        if(i==n)
            return 0;
        if(dp[j][i]!=-1) return dp[j][i];
        if(buy)
        {
            return  dp[j][i]=max( -prices[i]+ sl(prices,fee,i+1,!buy)  ,sl(prices,fee,i+1,buy
                )) ;
        }
        else 
            return dp[j][i]=max(  sl(prices,fee,i+1,buy),prices[i] -fee+ sl(prices,fee,i+1
                ,!buy));
        
        
    }
    int maxProfit(vector<int>& prices, int fee) {
        int buy=1;
        int n=prices.size();
        dp.resize(2,vector<int>(n+1,-1));
        return sl(prices,fee,0,buy);
        
        
    }
};
