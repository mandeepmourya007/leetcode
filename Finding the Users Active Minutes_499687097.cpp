class Solution {
public:
    
    bool cmp(vector<int> &a,vector<int> &b)
    {
        if(a[1]==b[1])
            return  a[0]<b[0];
        return a[1]<b[1];
    }
    
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        
        map<int,set<int>> mp;
        int n=logs.size();
        for(int i=0;i<n;i++)
        {
            mp[logs[i][0]].insert(logs[i][1]);
        }
        vector<int> ans(k,0);  
        for(auto i=mp.begin();i!=mp.end();i++)
            ans[mp[i->first].size()-1]++; 
        return ans;
    }
};
