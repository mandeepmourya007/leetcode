class Solution {
public:
    

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
     
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++)
        {
            
            // if(nums[i] +nums[n-1]+ nums[n-2]  + nums[n-3] <target ) continue;
            // if(nums[i] +nums[i+1]+ nums[i+2]  + nums[i+3] >target ) break;
            if(i>0 and nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n-2;j++)
            {
                
                if(j>i+1 and nums[j]==nums[j-1]) continue;
                // if(nums[i]  + nums[j] +nums[j+1] + nums[j+2] >target) break;
                // if(nums[i]  + nums[j] +nums[n-1] + nums[n-2] <target) continue;
                
                int l=j+1,r=n-1;
                while(l<r)
                {
                    int sum=nums[i] + nums[j] +nums[l] +nums[r];
                    if(j+1<l and nums[l-1]==nums[l]) {l++;continue;}
                    if(n-1>r and nums[r]==nums[r+1]) {r--;continue;}
                    if(sum>target)
                    {
                        r--;
                    }
                    else if(sum<target)
                    {
                        l++;
                    }
                    else 
                    {
                        ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                    l++;r--;
                    }
                    
                }
                
            }
        }
        
        return ans;
    }
};
