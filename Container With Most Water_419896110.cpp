class Solution {
public:
    int maxArea(vector<int>& nums) {
        
        int n=nums.size();
        int maxi=0;
        if(n==0)
            return 0;
        if(n==1)
            return nums[0];
        // int left[n],right[n];
        //     for(int j=0;j<n;j++)
                    
        
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     maxi=max(maxi,(j-i)*min(nums[i],nums[j]));
        // }
        int l=0,r=n-1;
        while(l<r)
        {
            if(nums[l]<nums[r])
            {
             maxi=max(maxi,(r-l)*nums[l++]);   
            }
            else
            {
             maxi=max(maxi,(r-l)*nums[r--]);   
                
            }
        }
        
        return maxi;
    }
};
