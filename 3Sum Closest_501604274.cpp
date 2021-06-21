class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
  
        sort(nums.begin(),nums.end());
        int n=nums.size(),ans=1e5;
        for(int i=0;i<n-2;i++)
        {
            // if(i>0 and nums[i-1]==nums[i]) continue;
            
            int l=i+1,r=n-1;
            while(l<r)
            {
                int s=nums[i] +nums[l] + nums[r];
                if(s==target) return s;
                if( abs(target-s)<abs(target-ans))
                    ans=s;
                 if(target>s)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
        return ans;
        
    }
};
