class Solution {
public:
    int dp[501][501];
    int bb(vector<int>& nums ,int i,int j)
    {

        if(i>j) return 0;
           
        if(dp[i][j]) return  dp[i][j];
       
        int n=nums.size();
        int ans=0;
        int t=1;
        for(int k=i;k<=j;k++)
        {
            t=nums[k];
            if(i-1>=0)
                t*=nums[i-1];
            
            
            if(j+1<n)
                t*=nums[j+1];
            
            ans=max(ans,bb(nums,i,k-1)  + bb(nums,k+1,j) +t);
            
        }    
        return dp[i][j]=ans;
        
        
    }
    
    
    int maxCoins(vector<int>& nums) {
  
        
        int n=nums.size();
        // vector<vector<int>> dp(n,vector<int>(n,INT_MIN));
        
        return  bb(nums,0,n-1);
; 
    }
};
