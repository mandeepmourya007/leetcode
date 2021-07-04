class Solution {
public:
    bool check(vector<int>& nums) {
        
        
        int n=nums.size();
        if(n==1) return 1;
        int c=0;
        for( int i=1;i<n+1;i++)
        {
            if(nums[(i-1)%n]>nums[i%n])
                c++;
            if(c>1)
                return 0;
            
        }
        if(c<=1)
            return 1;
        return 0;
        
    }
};
