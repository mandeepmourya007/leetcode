class Solution {
public:
    int rev(int a)
    {
        int ans=0;
        while(a)
        {
            ans=ans*10 +a%10;
            a/=10;
            
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) {
        int n=nums.size();
        int rnums[n];
        int m=1000000000+7;
        for(int i=0;i<n;i++)  rnums[i]=rev(nums[i]);
        
     
        
        map<int,int> mp;
        for(int i=0;i<n;i++)
            mp[nums[i]- rnums[i]]++;
        long ans=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
        
            long     x=it -> second%m;
             ans+= ((x/2.0*(x-1))  );
            ans=ans%m;

        }
  
        return ans; 
        
        
    }
};
