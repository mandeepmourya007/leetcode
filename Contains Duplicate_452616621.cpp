class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        map<int,int> mp;
        for(int x: nums)
        {
            if(mp.find(x)!=mp.end())
                return 1;
            mp[x]=1;
        cout<<x<<" ";
        
        }
        
                return 0;
        
    
        
    }
};
