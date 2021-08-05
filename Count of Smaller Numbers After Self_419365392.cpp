class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        // multiset<int >T;
        int n=nums.size();
        if(n==0)
            return {};
        if(n==1)
            return {0};
            vector<int > ans(n,0),T;
     
        T.push_back(nums[n-1]);   
            // auto tt= lower_bound(T.begin(),T.end(),nums[n-1]);
        
        for(int i=n-2;i>=0;i--)
        {
        // T.insert(nums[i]);
        // sort(T.begin(),T.end());
        
            auto t= lower_bound(T.begin(),T.end(),nums[i]);
            ans[i]=(t-T.begin());
            T.insert(t,nums[i]);
                
        }
        return ans;
    }
};
