class Solution {
    vector<int> r;
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(auto i=0;i!=nums.size();i++)
        {
        for(auto j=i+1;j!=nums.size();j++)
        {
            if(nums[i]+nums[j]==target){
                r.push_back(i);
                r.push_back(j);
                break;
            }
                
               
        
        
        }
        
        
        }
         return r;
        }};
