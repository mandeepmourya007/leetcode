class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
       int f=-1,s=-1; 
    int i=0;
        int n=nums.size();
        for(;i<n;i++)
    {
        // if(f!=-1 && nums[i]==target)
        //     s=i
        if(nums[i]==target)
            {f=i;
      break;
            } 
    }
    
        if(f==-1)
            return {-1,-1};
    while(i<n && nums[i]==target )i++;
    
        return {f,i-1};
    
    }
    
    
    
    
    
    
    
    
};
