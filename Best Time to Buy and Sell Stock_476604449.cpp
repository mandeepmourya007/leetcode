class Solution {
public:
    int maxProfit(vector<int>& nums) {
        
        int n=nums.size();
       int i=0;
       int buy=nums[i];
       int sell=nums[i];
        
       int  ans=0;
        for( i=0;i<n;i++)
        {
            sell=nums[i];

            ans=max(ans,sell-buy);
            if(nums[i]<buy) buy=nums[i];
            
            
        }
        
        return ans;
        
    }
};
