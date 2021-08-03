class Solution {
public:

 
    
    vector<int> twoSum(vector<int>& nums, int t) {
    
    int l=0,r=nums.size()-1;
     while(l<r)
     {
         int sum=nums[l] + nums[r];
         if(sum==t)
             return {l+1,r+1};
         
         if(sum>t)
             r--;
         else l++;
         
     }
        
        return {};
        
    }

    

 
};
