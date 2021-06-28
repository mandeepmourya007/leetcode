class Solution {
public:
    int maxProfit(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> dp(n,0);
        int buy=nums[0];
        int sell=nums[0];
        for(int  i=0;i<n;i++)
        {
            buy=min(buy,nums[i]);
            sell=nums[i];
            dp[i]=max(dp[i],sell-buy);  
        }
        int max_profit=0;
        for(int i=0;i<n;i++) max_profit=max(max_profit,dp[i]);
        
        return max_profit;
        
    }
};
