class Solution {
public:
    
//     int solve(vector<int>p,vector<int>dp)
//     {
        
//         int ans=0;
//         for(int i=1;i<n;i++)
//         {
//             ans=max(dp[n],p[n-1] -p[i-i]);
            
//         }
        
        
        
        
//     }
    
    int maxProfit(vector<int>& p) {
        
        int n=p.size();
        int ans=0;
        int buy=0,sell=1;
        while(sell<n)
        {
//             for(int j=0;j<i;j++ )
//                 ans=max(ans,p[i]-p[j]);
           
            ans=max(ans,p[sell]-p[buy]);
            if(p[buy]>p[sell])
                buy=sell;
        sell++;
        }
        
        return ans;
        
    }
};
