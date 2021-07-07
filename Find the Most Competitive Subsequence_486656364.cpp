class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        int n=nums.size();
        stack<int> s;
        s.push(nums[0]);
        for(int i=1;i<n;i++)
        {
            
            while( !s.empty() and s.top()>nums[i]  and  s.size()-1+ n-i   >=k) 
            {
                s.pop();
            }
            
            if(s.size()<k)
                s.push(nums[i]);
                // s.pop();
        }
        
        
        vector<int> ans(k);
        while(!s.empty())
        {
            ans[k-1]=s.top();
            s.pop();
            k--;
        }
        return ans;
    }
};
