class Solution {
public:
    
    static bool isp(vector<int> &nums,int n,int c)
    {
        int d=1;
        int wt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>c)return 0;
            if(wt+nums[i]<=c)
                wt+=nums[i];
            else 
            {
                wt=nums[i];
                d++;
            }
        }
        return d<=n;
        
    }
    int shipWithinDays(vector<int>& wts, int D) {
        
        int l=0,r=0;
        for(int x :wts)
            r+=x;
        
        int ans=0;
        while(l<=r)
        {
            int m=(l+r)/2;
            
            if(isp(wts,D,m))
            {
                ans=m;
                r=m-1;
                
            }
            else l=m+1;
            
            
        }
        return ans;
        
        
    }
};
