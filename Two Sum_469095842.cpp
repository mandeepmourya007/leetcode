class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
          int len = nums.size();
         vector<int> ret;
        for (int i = 0; i < len;i++) {
            for (int j = i+1; j < len;j++){
                if (nums[i]+nums[j] == target) {
                    ret = {i,j};
                    return ret;
                }
            }
        }

        return ret;
    }
};
