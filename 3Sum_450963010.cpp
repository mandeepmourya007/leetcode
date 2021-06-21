class Solution {
public:
    
 
    void solve(vector<int> &nums, vector<vector<int>> &res)
    {
        
        int n=nums.size();
        if(n<3)
           {  
            return ;
           }   
        
        for(int i=0;i<n;i++)
        {
            int l=i+1,r=n-1;
            
            while(l<r)
            {
            
                if(nums[i] +nums[l] +nums[r]>0)
                    r--;

                else if(nums[i] +nums[l] +nums[r]<0)
                    l++;

                else
               {    
                        res.push_back({nums[i],nums[l],nums[r]});
         
                    
            while(l<r && nums[l+1]==nums[l])
                l++;
             l++;
            while(l<r && nums[r-1]==nums[r])
                   r--;
            r--;
                    
                }                   
            } 
            
         while(i<n-3 && nums[i+1]==nums[i])
                i++;
           
        }
        
    }
        
    
    vector<vector<int>> threeSum(vector<int>& nums) {
      
       vector<vector<int>> res;
       sort(nums.begin(),nums.end());
       solve(nums,res); 
       return res;
    }
};
