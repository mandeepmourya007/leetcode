class Solution {
public:
    int numTeams(vector<int>& nums) {

        int n=nums.size();
        int ans =0;
        int ls=0,ll=0;
        int rs=0,rl=0;
        for(int i=0;i<n;i++)
        {
            ls=0,ll=0;
            rs=0,rl=0;
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]<nums[j])        rs++;
                else if(nums[i]>nums[j])   rl++;
                
            }
            
            for(int j=0;j<i;j++)
            {
                
                
                if(nums[i]<nums[j])        ls++;
                else if(nums[i]>nums[j])   ll++;
            }

            ans+=   (ls*rl  + ll*rs)  ;
        }
        
        return ans;
    }
};
