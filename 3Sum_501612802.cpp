class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        int n=nums.size();
        if(n<3) return {};
        for ( unsigned int i=0; i<nums.size()-2; i++) {
            if ((i>0) && (nums[i]==nums[i-1]))
                continue;
            int l = i+1, r = nums.size()-1;
            while (l<r) {
                int s = nums[i]+nums[l]+nums[r];
                if (s>0) r--;
                else if (s<0) l++;
                else {
                    res.push_back(vector<int> {nums[i], nums[l], nums[r]});
                while (l<r and nums[l]==nums[l+1]) l++;
                while (l<r and nums[r]==nums[r-1]) r--;
                l++; r--;
                }
            }
        }
        return res;
    }
};
