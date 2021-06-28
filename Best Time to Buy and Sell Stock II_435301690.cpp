class Solution {
public:

    
    int maxProfit(vector<int>& prices) {
        
          long long profit{};
        long long n=prices.size();
        for(int i=0;i<n-1;i++)
        {
            if(prices[i]<prices[i+1])
                profit+=prices[i+1]-prices[i];
        }
        
        return profit;
    }
};
