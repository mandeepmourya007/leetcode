class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        //with exor
        
        //size
        // int n = nums.size();
        // // result with sum of n number initialy
        // int result = nums[0];
        // for(int i=1;i<n;i++)
        //     result^=nums[i]^i;
        // return result;
        
        
        //with sorting
        int result;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                result = nums[i];
                break;
            }        
        }
        return result;
    }
};
