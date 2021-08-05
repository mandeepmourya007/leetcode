class Solution {
public:
    int countPairs(vector<int>& dl) {
        
        
        int ans=0;
        int m=1e9 +7;
        
        int n=dl.size();
        map<int,long long>mp;
    
           
        for(auto i=0;i<n;i++)
        {
            
            for(int j=0;j<=21;j++)
            {
                if( (  mp.find( (1<<j) -dl[i])) !=mp.end())
                {
                    ans +=   mp[(1<<j) -dl[i]];
                    ans%=m;
                }
                
            }
                
            mp[dl[i]]++;
            
            }
        return ans%m;
            
        
    }
};
